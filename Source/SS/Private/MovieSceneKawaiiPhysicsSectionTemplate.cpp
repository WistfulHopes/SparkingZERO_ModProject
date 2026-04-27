#include "MovieSceneKawaiiPhysicsSectionTemplate.h"
#include "MovieSceneKawaiiPhysicsSection.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Actor.h"
#include "Animation/AnimInstance.h"
#include "IMovieScenePlayer.h"
#include "AnimNode_KawaiiPhysics.h"
#include "SSAnimInstance.h" 

FMovieSceneKawaiiPhysicsSectionTemplate::FMovieSceneKawaiiPhysicsSectionTemplate() {}

FMovieSceneKawaiiPhysicsSectionTemplate::FMovieSceneKawaiiPhysicsSectionTemplate(const UMovieSceneKawaiiPhysicsSection& Section)
    : FMovieSceneParameterSectionTemplate(Section),
      ScalarParameterNamesAndCurves(Section.GetScalarParameterNamesAndCurves()),
      BoolParameterNamesAndCurves(Section.GetBoolParameterNamesAndCurves()),
      VectorParameterNamesAndCurves(Section.GetVectorParameterNamesAndCurves())
{
}

EMovieSceneCompletionMode FMovieSceneKawaiiPhysicsSectionTemplate::GetCompletionMode() const
{
    return EMovieSceneCompletionMode::RestoreState;
}

struct FKawaiiPhysicsExecutionToken : IMovieSceneExecutionToken
{
    TArray<FScalarParameterNameAndCurve> Scalars;
    TArray<FBoolParameterNameAndCurve> Bools;
    TArray<FVectorParameterNameAndCurves> Vectors;
    FFrameTime EvalTime;

    FKawaiiPhysicsExecutionToken(
        const TArray<FScalarParameterNameAndCurve>& InScalars,
        const TArray<FBoolParameterNameAndCurve>& InBools,
        const TArray<FVectorParameterNameAndCurves>& InVectors,
        FFrameTime InEvalTime)
        : Scalars(InScalars), Bools(InBools), Vectors(InVectors), EvalTime(InEvalTime)
    {}

    virtual void Execute(const FMovieSceneContext& Context,
                         const FMovieSceneEvaluationOperand& Operand,
                         FPersistentEvaluationData& PersistentData,
                         IMovieScenePlayer& Player) override
    {
        TArrayView<TWeakObjectPtr<>> RuntimeObjects = Player.FindBoundObjects(Operand);

        for (TWeakObjectPtr<> WeakObj : RuntimeObjects)
        {
            AActor* Actor = Cast<AActor>(WeakObj.Get());
            if (!Actor) continue;

            // Get all SkeletalMeshComponents in the Actor
            TArray<USkeletalMeshComponent*> SkeletalMeshComponents;
            Actor->GetComponents(SkeletalMeshComponents);

            for (USkeletalMeshComponent* SkeletalMesh : SkeletalMeshComponents)
            {
                if (!SkeletalMesh) continue;

                UAnimInstance* AnimInstance = SkeletalMesh->GetAnimInstance();
                if (!AnimInstance) continue;

                // --- Apply scalar material parameters ---
                for (const FScalarParameterNameAndCurve& Curve : Scalars)
                {
                    float Value = 0.f;
                    if (Curve.ParameterCurve.Evaluate(EvalTime, Value))
                    {
                        SkeletalMesh->SetScalarParameterValueOnMaterials(Curve.ParameterName, Value);
                    }
                }

                // --- Apply boolean morph targets ---
                for (const FBoolParameterNameAndCurve& Curve : Bools)
                {
                    bool bValue = false;
                    if (Curve.ParameterCurve.Evaluate(EvalTime, bValue))
                    {
                        AnimInstance->SetMorphTarget(Curve.ParameterName, bValue ? 1.0f : 0.0f);
                    }
                }

                // --- Wind Parameter Section ---
                float WindScale = 1.f;
                float OverwriteWindSpeed = 0.f;
                FVector OverwriteWindDirection = FVector::ZeroVector;

                for (const FScalarParameterNameAndCurve& Curve : Scalars)
                {
                    if (Curve.ParameterName == "WindScale")
                    {
                        Curve.ParameterCurve.Evaluate(EvalTime, WindScale);
                    }
                    else if (Curve.ParameterName == "OverwriteWindSpeed")
                    {
                        Curve.ParameterCurve.Evaluate(EvalTime, OverwriteWindSpeed);
                    }
                }

                for (const FVectorParameterNameAndCurves& Curve : Vectors)
                {
                    if (Curve.ParameterName == "OverwriteWindDirection")
                    {
                        float X = 0.f, Y = 0.f, Z = 0.f;
                        Curve.XCurve.Evaluate(EvalTime, X);
                        Curve.YCurve.Evaluate(EvalTime, Y);
                        Curve.ZCurve.Evaluate(EvalTime, Z);
                        OverwriteWindDirection = FVector(X, Y, Z);
                    }
                }

                // --- Apply wind to KawaiiPhysics via custom AnimInstance ---
                if (USSAnimInstance* SSAnim = Cast<USSAnimInstance>(AnimInstance))
                {
                    SSAnim->ApplyWindToAllKawaiiPhysicsNodes(
                        WindScale,
                        OverwriteWindSpeed,
                        OverwriteWindDirection,
                        /* bEnableWind = */ true,
                        /* bEnableOverwriteWind = */ true
                    );
                }
            }
        }
    }
};

void FMovieSceneKawaiiPhysicsSectionTemplate::Evaluate(
    const FMovieSceneEvaluationOperand& Operand,
    const FMovieSceneContext& Context,
    const FPersistentEvaluationData& PersistentData,
    FMovieSceneExecutionTokens& ExecutionTokens) const
{
    const FFrameTime EvalTime = Context.GetTime();

    ExecutionTokens.Add(FKawaiiPhysicsExecutionToken(
        ScalarParameterNamesAndCurves,
        BoolParameterNamesAndCurves,
        VectorParameterNamesAndCurves,
        EvalTime
    ));
}


