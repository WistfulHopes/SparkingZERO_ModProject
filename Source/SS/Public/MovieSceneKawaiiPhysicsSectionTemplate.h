#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Evaluation/MovieSceneParameterTemplate.h"
#include "MovieSceneKawaiiPhysicsSection.h"
#include "MovieSceneKawaiiPhysicsSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneKawaiiPhysicsSectionTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
    FMovieSceneKawaiiPhysicsSectionTemplate();
    FMovieSceneKawaiiPhysicsSectionTemplate(const UMovieSceneKawaiiPhysicsSection& Section);
    
    virtual void Evaluate(const FMovieSceneEvaluationOperand& Operand,
                          const FMovieSceneContext& Context,
                          const FPersistentEvaluationData& PersistentData,
                          FMovieSceneExecutionTokens& ExecutionTokens) const override;

    virtual UScriptStruct& GetScriptStructImpl() const override
    {
        return *StaticStruct();
    }

    virtual EMovieSceneCompletionMode GetCompletionMode() const;
    
private:
    TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves;
    TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves;
    TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;
};

