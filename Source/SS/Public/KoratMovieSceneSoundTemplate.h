#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneParameterTemplate.h"
#include "KoratMovieSceneSoundTemplate.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratMovieSceneSoundTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
    FKoratMovieSceneSoundTemplate();
    FKoratMovieSceneSoundTemplate(const UKoratMovieSceneSoundSceneSection& Section);

    virtual void Evaluate(const FMovieSceneEvaluationOperand& Operand,
                          const FMovieSceneContext& Context,
                          const FPersistentEvaluationData& PersistentData,
                          FMovieSceneExecutionTokens& ExecutionTokens) const override;

    virtual UScriptStruct& GetScriptStructImpl() const override
    {
        return *StaticStruct();
    }

    virtual EMovieSceneCompletionMode GetCompletionMode() const;
    
    TArray<FBoolParameterNameAndCurve> BoolCurves;
};