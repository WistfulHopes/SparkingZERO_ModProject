#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "KoratMovieSceneBattleSubtitleSectionData.h"
#include "KoratMovieSceneBattleSubtitleTemplate.generated.h"

USTRUCT(BlueprintType)
struct FKoratMovieSceneBattleSubtitleTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMovieSceneBattleSubtitleSectionData EventData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenForwards : 1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenBackwards : 1;

    SS_API FKoratMovieSceneBattleSubtitleTemplate();
    FKoratMovieSceneBattleSubtitleTemplate(const UKoratMovieSceneBattleSubtitleSection& Section);

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


