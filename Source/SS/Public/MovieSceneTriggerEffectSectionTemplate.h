#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "ESSKeyInputType.h"
#include "KoratTriggerEffectParameters.h"
#include "MovieSceneTriggerEffectSection.h"
#include "MovieSceneTriggerEffectSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTriggerEffectSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    FMovieSceneTriggerEffectSectionTemplate();
    FMovieSceneTriggerEffectSectionTemplate(const UMovieSceneTriggerEffectSection& Section);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSKeyInputType InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratTriggerEffectParameters Params;
    
    TRange<FFrameNumber> SectionRange;
    
    virtual void Evaluate(const FMovieSceneEvaluationOperand& Operand,
                          const FMovieSceneContext& Context,
                          const FPersistentEvaluationData& PersistentData,
                          FMovieSceneExecutionTokens& ExecutionTokens) const override;

    virtual UScriptStruct& GetScriptStructImpl() const override
    {
        return *StaticStruct();
    }

    virtual EMovieSceneCompletionMode GetCompletionMode() const;
    
};