#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KoratMovieSceneEventSceneSectionData.h"
#include "KoratMovieSceneEventSceneTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKoratMovieSceneEventSceneTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMovieSceneEventSceneSectionData EventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenBackwards: 1;
    
    SS_API FKoratMovieSceneEventSceneTemplate();
    FKoratMovieSceneEventSceneTemplate(const UKoratMovieSceneEventSceneSection& Section);

    virtual void EvaluateSwept(const FMovieSceneEvaluationOperand& Operand,
                               const FMovieSceneContext& Context,
                               const TRange<FFrameNumber>& SweptRange,
                               const FPersistentEvaluationData& PersistentData,
                               FMovieSceneExecutionTokens& ExecutionTokens) const override;

    virtual UScriptStruct& GetScriptStructImpl() const override
    {
        return *StaticStruct();
    }

    virtual EMovieSceneCompletionMode GetCompletionMode() const;
    virtual FName GetEvaluationGroup() const;
};

