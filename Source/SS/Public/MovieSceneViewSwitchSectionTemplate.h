#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneViewSwitchSection.h"
#include "MovieSceneViewSwitchSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneViewSwitchSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    FMovieSceneViewSwitchSectionTemplate();
    FMovieSceneViewSwitchSectionTemplate(const UMovieSceneViewSwitchSection& Section);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurveValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLowPriority;
    
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