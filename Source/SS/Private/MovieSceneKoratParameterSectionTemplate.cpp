#include "MovieSceneKoratParameterSectionTemplate.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Sections/MovieSceneParameterSection.h"
#include "Evaluation/MovieScenePreAnimatedState.h"
#include "Evaluation/MovieSceneExecutionTokens.h"
#include "GameFramework/Actor.h"
#include "Components/SkeletalMeshComponent.h"

FMovieSceneKoratParameterSectionTemplate::FMovieSceneKoratParameterSectionTemplate() {}

FMovieSceneKoratParameterSectionTemplate::FMovieSceneKoratParameterSectionTemplate(const UMovieSceneParameterSection& Section)
    : FMovieSceneParameterSectionTemplate(Section),
      ScalarParameterNamesAndCurves(Section.GetScalarParameterNamesAndCurves()),
      VectorParameterNamesAndCurves(Section.GetVectorParameterNamesAndCurves()),
      ColorParameterNamesAndCurves(Section.GetColorParameterNamesAndCurves())
{
}

struct FPreAnimatedMaterialParameterState : IMovieScenePreAnimatedToken
{
    FName ParameterName;
    float ScalarValue = 0.f;
    FLinearColor VectorValue = FLinearColor::Black; // use FLinearColor for material vector params
    enum class EType { Scalar, Vector, Color } Type = EType::Scalar;

    // constructor that captures current state from the dynamic material
    FPreAnimatedMaterialParameterState(UMaterialInstanceDynamic* DynMat, FName InName)
        : ParameterName(InName)
    {
        if (!DynMat) return;

        // Try scalar first
        float TmpScalar = 0.f;
        if (DynMat->GetScalarParameterValue(ParameterName, TmpScalar))
        {
            Type = EType::Scalar;
            ScalarValue = TmpScalar;
        }
        else
        {
            // Vector/color parameters are exposed as FLinearColor
            FLinearColor TmpColor;
            if (DynMat->GetVectorParameterValue(ParameterName, TmpColor))
            {
                // We can't tell exact intent (vector vs color) reliably here; caller will restore appropriately.
                // We'll mark Color if alpha != 0 or keep Vector otherwise. Choose one policy: treat as Vector if alpha==0.
                if (TmpColor.A == 0.f)
                {
                    Type = EType::Vector;
                }
                else
                {
                    Type = EType::Color;
                }
                VectorValue = TmpColor;
            }
            else
            {
                // Failed to find any parameter; leave default values in place.
            }
        }
    }

    // Must match the interface exactly (non-const, full namespace for params type).
    virtual void RestoreState(UObject& Object, const UE::MovieScene::FRestoreStateParams& Params) override
    {
        UMaterialInstanceDynamic* DynMat = Cast<UMaterialInstanceDynamic>(&Object);
        if (!DynMat) return;

        switch (Type)
        {
            case EType::Scalar:
                DynMat->SetScalarParameterValue(ParameterName, ScalarValue);
                break;
            case EType::Vector:
                // store vector as RGB, alpha left as-is (or 0)
                DynMat->SetVectorParameterValue(ParameterName, VectorValue);
                break;
            case EType::Color:
                DynMat->SetVectorParameterValue(ParameterName, VectorValue);
                break;
        }
    }
};

struct FMaterialParamTokenProducer : IMovieScenePreAnimatedTokenProducer
{
    FName ParamName;
    FMaterialParamTokenProducer(FName InName) : ParamName(InName) {}

    virtual IMovieScenePreAnimatedTokenPtr CacheExistingState(UObject& Object) const override
    {
        UMaterialInstanceDynamic* Dyn = Cast<UMaterialInstanceDynamic>(&Object);
        if (!Dyn)
        {
            // Return a default (empty) token if cast fails; the TInlineValue will be empty.
            return IMovieScenePreAnimatedTokenPtr();
        }
        return FPreAnimatedMaterialParameterState(Dyn, ParamName);
    }
};

EMovieSceneCompletionMode FMovieSceneKoratParameterSectionTemplate::GetCompletionMode() const
{
    return EMovieSceneCompletionMode::RestoreState;
}

struct FKoratParameterExecutionToken : IMovieSceneExecutionToken
{
    TArray<FScalarParameterNameAndCurve> Scalars;
    TArray<FVectorParameterNameAndCurves> Vectors;
    TArray<FColorParameterNameAndCurves> Colors;
    FFrameTime EvalTime;

    FKoratParameterExecutionToken(
        const TArray<FScalarParameterNameAndCurve>& InScalars,
        const TArray<FVectorParameterNameAndCurves>& InVectors,
        const TArray<FColorParameterNameAndCurves>& InColors,
        FFrameTime InEvalTime)
        : Scalars(InScalars), Vectors(InVectors), Colors(InColors), EvalTime(InEvalTime)
    {}

    virtual void Execute(const FMovieSceneContext& Context,
                         const FMovieSceneEvaluationOperand& Operand,
                         FPersistentEvaluationData& PersistentData,
                         IMovieScenePlayer& Player) override
    {
        TArray<TWeakObjectPtr<UObject>> WeakBoundObjects(Player.FindBoundObjects(Operand));
    
        for (TWeakObjectPtr<UObject> WeakObj : WeakBoundObjects)
        {
            UObject* Object = WeakObj.Get();
            if (!Object) continue;
    
            TArray<USkeletalMeshComponent*> SkeletalMeshComponents;
    
            // Check if it's an Actor first
            if (AActor* Actor = Cast<AActor>(Object))
            {
                Actor->GetComponents<USkeletalMeshComponent>(SkeletalMeshComponents);
            }
            // Fallback: if the object is a SkeletalMeshComponent itself
            else if (USkeletalMeshComponent* SkelComp = Cast<USkeletalMeshComponent>(Object))
            {
                SkeletalMeshComponents.Add(SkelComp);
            }
    
            // Now apply parameters to all valid skeletal mesh components
            for (USkeletalMeshComponent* SkelComp : SkeletalMeshComponents)
            {
                if (!SkelComp) continue;
    
                const int32 MaterialCount = SkelComp->GetNumMaterials();
                for (int32 MaterialIndex = 0; MaterialIndex < MaterialCount; ++MaterialIndex)
                {
                    // ----------- NEW: Handle Overlay Material ------------
                    UMaterialInterface* OverlayMatInterface = SkelComp->GetOverlayMaterial(); // Custom engine method
                    if (OverlayMatInterface)
                    {
                        UMaterialInstanceDynamic* DynOverlayMat = Cast<UMaterialInstanceDynamic>(OverlayMatInterface);
                        if (DynOverlayMat)
                        {
                            // Apply scalar parameters
                            for (const FScalarParameterNameAndCurve& Param : Scalars)
                            {
                                float Value = 0.f;
                                if (Param.ParameterCurve.Evaluate(EvalTime, Value))
                                {
                                    FMaterialParamTokenProducer Producer(Param.ParameterName);
                                    Player.SavePreAnimatedState(
                                        *DynOverlayMat,
                                        FMovieSceneAnimTypeID::Unique(),
                                        Producer
                                    );
                                    DynOverlayMat->SetScalarParameterValue(Param.ParameterName, Value);
                                }
                            }
                    
                            // Apply vector parameters
                            for (const FVectorParameterNameAndCurves& Param : Vectors)
                            {
                                float X = 0.f, Y = 0.f, Z = 0.f;
                                Param.XCurve.Evaluate(EvalTime, X);
                                Param.YCurve.Evaluate(EvalTime, Y);
                                Param.ZCurve.Evaluate(EvalTime, Z);
                    
                                FMaterialParamTokenProducer Producer(Param.ParameterName);
                                Player.SavePreAnimatedState(
                                    *DynOverlayMat,
                                    FMovieSceneAnimTypeID::Unique(),
                                    Producer
                                );
                    
                                DynOverlayMat->SetVectorParameterValue(Param.ParameterName, FLinearColor(X, Y, Z, 0.f));
                            }
                    
                            // Apply color parameters
                            for (const FColorParameterNameAndCurves& Param : Colors)
                            {
                                float R = 0.f, G = 0.f, B = 0.f, A = 0.f;
                                Param.RedCurve.Evaluate(EvalTime, R);
                                Param.GreenCurve.Evaluate(EvalTime, G);
                                Param.BlueCurve.Evaluate(EvalTime, B);
                                Param.AlphaCurve.Evaluate(EvalTime, A);
                    
                                FMaterialParamTokenProducer Producer(Param.ParameterName);
                                Player.SavePreAnimatedState(
                                    *DynOverlayMat,
                                    FMovieSceneAnimTypeID::Unique(),
                                    Producer
                                );
                    
                                DynOverlayMat->SetVectorParameterValue(Param.ParameterName, FLinearColor(R, G, B, A));
                            }
                        }
                    }
                    UMaterialInterface* MatInterface = SkelComp->GetMaterial(MaterialIndex);
                    if (!MatInterface) continue;
    
                    UMaterialInstanceDynamic* DynMaterial = Cast<UMaterialInstanceDynamic>(MatInterface);
                    if (!DynMaterial)
                    {
                        DynMaterial = SkelComp->CreateAndSetMaterialInstanceDynamic(MaterialIndex);
                    }
    
                    if (!DynMaterial) continue;
    
                    // Apply scalar parameters
                    for (const FScalarParameterNameAndCurve& Param : Scalars)
                    {
                        float Value = 0.f;
                        if (Param.ParameterCurve.Evaluate(EvalTime, Value))
                        {
                            FMaterialParamTokenProducer Producer(Param.ParameterName);
                            Player.SavePreAnimatedState(
                                *DynMaterial,
                                FMovieSceneAnimTypeID::Unique(),
                                Producer
                            );
                            DynMaterial->SetScalarParameterValue(Param.ParameterName, Value);
                        }
                    }
    
                    // Apply vector parameters
                    for (const FVectorParameterNameAndCurves& Param : Vectors)
                    {
                        float X = 0.f, Y = 0.f, Z = 0.f;
                        Param.XCurve.Evaluate(EvalTime, X);
                        Param.YCurve.Evaluate(EvalTime, Y);
                        Param.ZCurve.Evaluate(EvalTime, Z);
    
                        FMaterialParamTokenProducer Producer(Param.ParameterName);
                        Player.SavePreAnimatedState(
                            *DynMaterial,
                            FMovieSceneAnimTypeID::Unique(),
                            Producer
                        );
    
                        DynMaterial->SetVectorParameterValue(Param.ParameterName, FLinearColor(X, Y, Z, 0.f));
                    }
    
                    // Apply color parameters
                    for (const FColorParameterNameAndCurves& Param : Colors)
                    {
                        float R = 0.f, G = 0.f, B = 0.f, A = 0.f;
                        Param.RedCurve.Evaluate(EvalTime, R);
                        Param.GreenCurve.Evaluate(EvalTime, G);
                        Param.BlueCurve.Evaluate(EvalTime, B);
                        Param.AlphaCurve.Evaluate(EvalTime, A);
    
                        FMaterialParamTokenProducer Producer(Param.ParameterName);
                        Player.SavePreAnimatedState(
                            *DynMaterial,
                            FMovieSceneAnimTypeID::Unique(),
                            Producer
                        );
    
                        DynMaterial->SetVectorParameterValue(Param.ParameterName, FLinearColor(R, G, B, A));
                    }
                }
            }
        }
    }
};

void FMovieSceneKoratParameterSectionTemplate::Evaluate(
    const FMovieSceneEvaluationOperand& Operand,
    const FMovieSceneContext& Context,
    const FPersistentEvaluationData& PersistentData,
    FMovieSceneExecutionTokens& ExecutionTokens) const
{
    const FFrameTime EvalTime = Context.GetTime();

    // Filter out parameters with no key data
    TArray<FScalarParameterNameAndCurve> ActiveScalars;
    for (const auto& Param : ScalarParameterNamesAndCurves)
    {
        if (Param.ParameterCurve.HasAnyData())
        {
            ActiveScalars.Add(Param);
        }
    }

    TArray<FVectorParameterNameAndCurves> ActiveVectors;
    for (const auto& Param : VectorParameterNamesAndCurves)
    {
        if (Param.XCurve.HasAnyData() || Param.YCurve.HasAnyData() || Param.ZCurve.HasAnyData())
        {
            ActiveVectors.Add(Param);
        }
    }

    TArray<FColorParameterNameAndCurves> ActiveColors;
    for (const auto& Param : ColorParameterNamesAndCurves)
    {
        if (Param.RedCurve.HasAnyData() || Param.GreenCurve.HasAnyData() ||
            Param.BlueCurve.HasAnyData() || Param.AlphaCurve.HasAnyData())
        {
            ActiveColors.Add(Param);
        }
    }

    if (ActiveScalars.Num() > 0 || ActiveVectors.Num() > 0 || ActiveColors.Num() > 0)
    {
        ExecutionTokens.Add(FKoratParameterExecutionToken(
            ActiveScalars, ActiveVectors, ActiveColors, EvalTime
        ));
    }
}
