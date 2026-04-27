#include "KoratMovieSceneAttachTemplate.h"
#include "KoratMovieSceneAttachSection.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "MovieSceneExecutionToken.h"
#include "IMovieScenePlayer.h"
#include "MovieSceneObjectBindingID.h"
#include "MovieSceneSequenceID.h"

FKoratMovieSceneAttachTemplate::FKoratMovieSceneAttachTemplate()
    : PropertyData()
    , PositionReference()
    , RotationReference()
    , PositionFirstSocketName()
    , PositionSecondSocketName()
    , RotationFirstSocketName()
    , RotationSecondSocketName()
    , PositionBlendRate()
    , RotationBlendRate()
    , PositionFollowing()
    , RotationFollowing()
{
}


FKoratMovieSceneAttachTemplate::FKoratMovieSceneAttachTemplate(const UKoratMovieSceneAttachSection& Section)
    : PositionReference(Section.GetPositionReference())
    , RotationReference(Section.GetRotationReference())
    , PositionFirstSocketName(Section.GetPositionFirstSocketName())
    , PositionSecondSocketName(Section.GetPositionSecondSocketName())
    , RotationFirstSocketName(Section.GetRotationFirstSocketName())
    , RotationSecondSocketName(Section.GetRotationSecondSocketName())
    , PositionBlendRate(Section.GetPositionBlendRate())
    , RotationBlendRate(Section.GetRotationBlendRate())
    , PositionFollowing(Section.GetPositionFollowing())
    , RotationFollowing(Section.GetRotationFollowing())
{
    PropertyData.PropertyName = FName("KoratAttach");
    PropertyData.PropertyPath = TEXT("KoratAttach");
}

EMovieSceneCompletionMode FKoratMovieSceneAttachTemplate::GetCompletionMode() const
{
    return EMovieSceneCompletionMode::KeepState;
}

// Execution token
struct FKoratAttachExecutionToken : IMovieSceneExecutionToken
{
    FMovieSceneObjectBindingID PositionParentBindingID;
    FMovieSceneObjectBindingID RotationParentBindingID;
    FName PositionSocketName;
    FName RotationSocketName;
    float PositionBlendRate;
    float RotationBlendRate;
    bool bPositionFollowing;
    bool bRotationFollowing;

    FKoratAttachExecutionToken(
        const FMovieSceneObjectBindingID& InPositionParent,
        const FMovieSceneObjectBindingID& InRotationParent,
        const FName& InPositionSocket,
        const FName& InRotationSocket,
        float InPositionBlendRate,
        float InRotationBlendRate,
        bool bInPositionFollowing,
        bool bInRotationFollowing
    )
        : PositionParentBindingID(InPositionParent)
        , RotationParentBindingID(InRotationParent)
        , PositionSocketName(InPositionSocket)
        , RotationSocketName(InRotationSocket)
        , PositionBlendRate(InPositionBlendRate)
        , RotationBlendRate(InRotationBlendRate)
        , bPositionFollowing(bInPositionFollowing)
        , bRotationFollowing(bInRotationFollowing)
    {}

    virtual void Execute(
        const FMovieSceneContext& Context,
        const FMovieSceneEvaluationOperand& Operand,
        FPersistentEvaluationData& PersistentData,
        IMovieScenePlayer& Player
    ) override
    {
        const float DeltaSeconds = FMath::Max(0.001f, Context.GetFrameRate().AsSeconds(Context.GetDelta()));
    
        // Find bound objects
        const auto ChildObjectsView = Player.FindBoundObjects(Operand);
        const auto PositionParentsView = Player.FindBoundObjects(PositionParentBindingID.GetGuid(), Operand.SequenceID);
        const auto RotationParentsView = Player.FindBoundObjects(RotationParentBindingID.GetGuid(), Operand.SequenceID);
    
        if (ChildObjectsView.Num() == 0 || (PositionParentsView.Num() == 0 && RotationParentsView.Num() == 0))
        {
            return;
        }
    
        // Helper: find Skin SkeletalMeshComponent, fallback to root
        auto FindSkinMesh = [](AActor* Actor) -> USceneComponent*
        {
            if (!Actor) return nullptr;
    
            TArray<USkeletalMeshComponent*> SkeletalMeshes;
            Actor->GetComponents<USkeletalMeshComponent>(SkeletalMeshes);
    
            for (USkeletalMeshComponent* MeshComp : SkeletalMeshes)
            {
                if (MeshComp && MeshComp->GetName().Contains(TEXT("Skin")))
                {
                    return MeshComp;
                }
            }
    
            return Actor->GetRootComponent();
        };
    
        // Find position and rotation components
        USceneComponent* PositionComp = nullptr;
        USceneComponent* RotationComp = nullptr;
    
        for (const TWeakObjectPtr<UObject>& Obj : PositionParentsView)
        {
            if (AActor* Actor = Cast<AActor>(Obj.Get()))
            {
                PositionComp = FindSkinMesh(Actor);
                break;
            }
        }
    
        for (const TWeakObjectPtr<UObject>& Obj : RotationParentsView)
        {
            if (AActor* Actor = Cast<AActor>(Obj.Get()))
            {
                RotationComp = FindSkinMesh(Actor);
                break;
            }
        }
    
        // Detect if we are in Sequencer/editor preview (not game world)
        bool bIsSequencerPreview = GWorld && !GWorld->IsGameWorld();
    
        // Iterate child actors
        for (const TWeakObjectPtr<UObject>& Obj : ChildObjectsView)
        {
            if (AActor* ChildActor = Cast<AActor>(Obj.Get()))
            {
                if (USceneComponent* ChildRoot = ChildActor->GetRootComponent())
                {
                    FVector TargetPos = ChildRoot->GetComponentLocation();
                    FQuat TargetRot = ChildRoot->GetComponentQuat();
    
                    // --- Position ---
                    if (PositionComp)
                    {
                        if (!PositionSocketName.IsNone() && PositionComp->DoesSocketExist(PositionSocketName))
                        {
                            TargetPos = PositionComp->GetSocketLocation(PositionSocketName);
                        }
                        else
                        {
                            TargetPos = PositionComp->GetComponentLocation();
                        }
                    }
    
                    // --- Rotation ---
                    if (RotationComp)
                    {
                        if (!RotationSocketName.IsNone() && RotationComp->DoesSocketExist(RotationSocketName))
                        {
                            TargetRot = RotationComp->GetSocketQuaternion(RotationSocketName);
                        }
                        else
                        {
                            TargetRot = RotationComp->GetComponentQuat();
                        }
                    }
    
                    // --- Blend / Snap ---
                    FVector NewPos = TargetPos;
                    FQuat NewRot = TargetRot;
    
                    if (!bIsSequencerPreview)
                    {
                        if (bPositionFollowing && PositionBlendRate > 0.f)
                        {
                            NewPos = FMath::VInterpTo(ChildRoot->GetComponentLocation(), TargetPos, DeltaSeconds, PositionBlendRate);
                        }
                        if (bRotationFollowing && RotationBlendRate > 0.f)
                        {
                            NewRot = FMath::QInterpTo(ChildRoot->GetComponentQuat(), TargetRot, DeltaSeconds, RotationBlendRate);
                        }
                    }
    
                    // Apply transform
                    ChildRoot->SetWorldLocationAndRotation(NewPos, NewRot, false, nullptr, ETeleportType::None);
                }
            }
        }
    }
};

void FKoratMovieSceneAttachTemplate::Evaluate(
    const FMovieSceneEvaluationOperand& Operand,
    const FMovieSceneContext& Context,
    const FPersistentEvaluationData& PersistentData,
    FMovieSceneExecutionTokens& ExecutionTokens
) const
{
    const FFrameTime Time = Context.GetTime();

    FMovieSceneActorReferenceKey PositionKey;
    if (!PositionReference.Evaluate(Time, PositionKey) || !PositionKey.Object.IsValid())
    {
        return;
    }

    FMovieSceneActorReferenceKey RotationKey;
    RotationReference.Evaluate(Time, RotationKey);
    if (!RotationKey.Object.IsValid())
    {
        RotationKey = PositionKey;
    }

    FString PosSocket;
    if (const FString* First = PositionFirstSocketName.Evaluate(Time))
    {
        PosSocket = *First;
    }
    if (PosSocket.IsEmpty())
    {
        if (const FString* Second = PositionSecondSocketName.Evaluate(Time))
        {
            PosSocket = *Second;
        }
    }

    FString RotSocket;
    if (const FString* First = RotationFirstSocketName.Evaluate(Time))
    {
        RotSocket = *First;
    }
    if (RotSocket.IsEmpty())
    {
        if (const FString* Second = RotationSecondSocketName.Evaluate(Time))
        {
            RotSocket = *Second;
        }
    }

    float PosBlend = 1.f, RotBlend = 1.f;
    PositionBlendRate.Evaluate(Time, PosBlend);
    RotationBlendRate.Evaluate(Time, RotBlend);

    bool bPosFollow = false, bRotFollow = false;
    PositionFollowing.Evaluate(Time, bPosFollow);
    RotationFollowing.Evaluate(Time, bRotFollow);

    const FName PosSocketName = PosSocket.IsEmpty() ? NAME_None : FName(*PosSocket);
    const FName RotSocketName = RotSocket.IsEmpty() ? NAME_None : FName(*RotSocket);

    ExecutionTokens.Add(FKoratAttachExecutionToken(
        PositionKey.Object,
        RotationKey.Object,
        PosSocketName,
        RotSocketName,
        PosBlend,
        RotBlend,
        bPosFollow,
        bRotFollow
    ));
}
