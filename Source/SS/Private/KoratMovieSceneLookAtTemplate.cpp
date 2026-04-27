#include "KoratMovieSceneLookAtTemplate.h"
#include "KoratMovieSceneLookAtSection.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "MovieSceneExecutionToken.h"
#include "IMovieScenePlayer.h"
#include "MovieSceneObjectBindingID.h"
#include "MovieSceneSequenceID.h"

FKoratMovieSceneLookAtTemplate::FKoratMovieSceneLookAtTemplate()
    : PartFlags()
    , EnableLookat()
    , UpdateLookAt()
    , Target1stReference()
    , Target1stSocketName()
    , Target2ndReference()
    , Target2ndSocketName()
    , Alpha()
    , EnableOverrideBlendTime()
    , OverrideBlendTime()
{
}

FKoratMovieSceneLookAtTemplate::FKoratMovieSceneLookAtTemplate(const UKoratMovieSceneLookAtSection& Section)
    : PartFlags(Section.GetPartFlags())
    , EnableLookat(Section.GetEnableLookat())
    , UpdateLookAt(Section.GetUpdateLookAt())
    , Target1stReference(Section.GetTarget1stReference())
    , Target1stSocketName(Section.GetTarget1stSocketName())
    , Target2ndReference(Section.GetTarget2ndReference())
    , Target2ndSocketName(Section.GetTarget2ndSocketName())
    , Alpha(Section.GetAlpha())
    , EnableOverrideBlendTime(Section.GetEnableOverrideBlendTime())
    , OverrideBlendTime(Section.GetOverrideBlendTime())
{
}

// Execution token
struct FKoratLookAtExecutionToken : IMovieSceneExecutionToken
{
    FMovieSceneObjectBindingID Target1stBindingID;
    FName Target1stSocket;
    FMovieSceneObjectBindingID Target2ndBindingID;
    FName Target2ndSocket;
    bool bEnableLookAt;
    bool bUpdateLookAt;
    float Alpha;
    bool bEnableOverrideBlendTime;
    float OverrideBlendTime;

    FKoratLookAtExecutionToken(
        const FMovieSceneObjectBindingID& InTarget1st,
        const FName& InTarget1stSocket,
        const FMovieSceneObjectBindingID& InTarget2nd,
        const FName& InTarget2ndSocket,
        bool bInEnableLookAt,
        bool bInUpdateLookAt,
        float InAlpha,
        bool bInEnableOverrideBlendTime,
        float InOverrideBlendTime
    )
        : Target1stBindingID(InTarget1st)
        , Target1stSocket(InTarget1stSocket)
        , Target2ndBindingID(InTarget2nd)
        , Target2ndSocket(InTarget2ndSocket)
        , bEnableLookAt(bInEnableLookAt)
        , bUpdateLookAt(bInUpdateLookAt)
        , Alpha(InAlpha)
        , bEnableOverrideBlendTime(bInEnableOverrideBlendTime)
        , OverrideBlendTime(InOverrideBlendTime)
    {}

    virtual void Execute(
        const FMovieSceneContext& Context,
        const FMovieSceneEvaluationOperand& Operand,
        FPersistentEvaluationData& PersistentData,
        IMovieScenePlayer& Player
    ) override
    {
        if (!bEnableLookAt)
        {
            return;
        }

        const auto ChildObjectsView = Player.FindBoundObjects(Operand);

        const auto Targets1View = Player.FindBoundObjects(Target1stBindingID.GetGuid(), Operand.SequenceID);
        const auto Targets2View = Player.FindBoundObjects(Target2ndBindingID.GetGuid(), Operand.SequenceID);

        if (ChildObjectsView.Num() == 0 || (Targets1View.Num() == 0 && Targets2View.Num() == 0))
        {
            return;
        }

        // Helper to get socket/component transform
        auto GetTargetTransform = [](AActor* Actor, const FName& Socket) -> FTransform
        {
            if (!Actor) return FTransform::Identity;
            USceneComponent* RootComp = Actor->GetRootComponent();
            if (!RootComp) return FTransform::Identity;

            if (!Socket.IsNone() && RootComp->DoesSocketExist(Socket))
            {
                return RootComp->GetSocketTransform(Socket);
            }
            return RootComp->GetComponentTransform();
        };

        // Iterate child actors (look-at applies to them)
        for (const TWeakObjectPtr<UObject>& Obj : ChildObjectsView)
        {
            if (AActor* ChildActor = Cast<AActor>(Obj.Get()))
            {
                if (USceneComponent* ChildRoot = ChildActor->GetRootComponent())
                {
                    // Pick target1 if valid, else target2
                    FTransform TargetXform = FTransform::Identity;
                    if (Targets1View.Num() > 0)
                    {
                        if (AActor* TgtActor = Cast<AActor>(Targets1View[0].Get()))
                        {
                            TargetXform = GetTargetTransform(TgtActor, Target1stSocket);
                        }
                    }
                    else if (Targets2View.Num() > 0)
                    {
                        if (AActor* TgtActor = Cast<AActor>(Targets2View[0].Get()))
                        {
                            TargetXform = GetTargetTransform(TgtActor, Target2ndSocket);
                        }
                    }

                    FVector ChildLoc = ChildRoot->GetComponentLocation();
                    FVector TargetLoc = TargetXform.GetLocation();
                    FVector Dir = (TargetLoc - ChildLoc).GetSafeNormal();

                    FQuat TargetRot = FRotationMatrix::MakeFromX(Dir).ToQuat();

                    // Blend alpha
                    FQuat NewRot = FQuat::Slerp(ChildRoot->GetComponentQuat(), TargetRot, Alpha);

                    // Optional override blend
                    if (bEnableOverrideBlendTime && OverrideBlendTime > 0.f && Context.GetFrameRate().IsValid())
                    {
                        const float DeltaSeconds = FMath::Max(0.001f, Context.GetFrameRate().AsSeconds(Context.GetDelta()));
                        float BlendRate = 1.f / OverrideBlendTime;
                        NewRot = FMath::QInterpTo(ChildRoot->GetComponentQuat(), TargetRot, DeltaSeconds, BlendRate);
                    }

                    ChildRoot->SetWorldRotation(NewRot);
                }
            }
        }
    }
};

void FKoratMovieSceneLookAtTemplate::Evaluate(
    const FMovieSceneEvaluationOperand& Operand,
    const FMovieSceneContext& Context,
    const FPersistentEvaluationData& PersistentData,
    FMovieSceneExecutionTokens& ExecutionTokens
) const
{
    const FFrameTime Time = Context.GetTime();

    bool bEnableLookAt = false;
    EnableLookat.Evaluate(Time, bEnableLookAt);

    bool bUpdateLookAt = false;
    UpdateLookAt.Evaluate(Time, bUpdateLookAt);

    FMovieSceneActorReferenceKey Target1Key;
    Target1stReference.Evaluate(Time, Target1Key);

    FString Socket1;
    if (const FString* Val = Target1stSocketName.Evaluate(Time))
    {
        Socket1 = *Val;
    }

    FMovieSceneActorReferenceKey Target2Key;
    Target2ndReference.Evaluate(Time, Target2Key);

    FString Socket2;
    if (const FString* Val = Target2ndSocketName.Evaluate(Time))
    {
        Socket2 = *Val;
    }

    float AlphaVal = 1.f;
    Alpha.Evaluate(Time, AlphaVal);

    bool bEnableOverride = false;
    EnableOverrideBlendTime.Evaluate(Time, bEnableOverride);

    float BlendTimeVal = 0.f;
    OverrideBlendTime.Evaluate(Time, BlendTimeVal);

    ExecutionTokens.Add(FKoratLookAtExecutionToken(
        Target1Key.Object,
        Socket1.IsEmpty() ? NAME_None : FName(*Socket1),
        Target2Key.Object,
        Socket2.IsEmpty() ? NAME_None : FName(*Socket2),
        bEnableLookAt,
        bUpdateLookAt,
        AlphaVal,
        bEnableOverride,
        BlendTimeVal
    ));
}