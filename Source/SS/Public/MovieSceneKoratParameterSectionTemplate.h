#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "Evaluation/MovieSceneParameterTemplate.h"
#include "Sections/MovieSceneParameterSection.h"
#include "MovieSceneKoratParameterSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneKoratParameterSectionTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
    FMovieSceneKoratParameterSectionTemplate();
    FMovieSceneKoratParameterSectionTemplate(const UMovieSceneParameterSection& Section);
    
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
    TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;
    TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves;
};


