#include "KoratMovieSceneBattleSubtitleTemplate.h"
#include "KoratMovieSceneBattleSubtitleSection.h"
#include "KoratMovieSceneBattleSubtitleSectionData.h"
#include "IMovieScenePlayer.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "SSBattleLevelScriptActor.h"

struct FBattleSubtitleExecutionToken : IMovieSceneExecutionToken
{
    FKoratMovieSceneBattleSubtitleSectionData EventData;

    FBattleSubtitleExecutionToken(const FKoratMovieSceneBattleSubtitleSectionData& InData)
        : EventData(InData) {}

    virtual void Execute(const FMovieSceneContext& Context, const FMovieSceneEvaluationOperand& Operand,
        FPersistentEvaluationData& PersistentData, IMovieScenePlayer& Player) override
    {
        const TArray<FFrameNumber>& Times = EventData.GetTimes();
        const TArray<FKoratMovieSceneBattleSubtitlePayload>& KeyValues = EventData.GetKeyValues();
    
        const FFrameTime CurrentFrame = Context.GetTime();
    }
};

FKoratMovieSceneBattleSubtitleTemplate::FKoratMovieSceneBattleSubtitleTemplate()
{
    bFireEventsWhenForwards = true;
    bFireEventsWhenBackwards = true;
}
FKoratMovieSceneBattleSubtitleTemplate::FKoratMovieSceneBattleSubtitleTemplate(const UKoratMovieSceneBattleSubtitleSection& Section)
{
    EventData = Section.GetEventData();
    bFireEventsWhenForwards = true;
    bFireEventsWhenBackwards = true;
}

// --- Completion mode ---
EMovieSceneCompletionMode FKoratMovieSceneBattleSubtitleTemplate::GetCompletionMode() const
{
    return EMovieSceneCompletionMode::RestoreState;
}

// --- Evaluation group ---
FName FKoratMovieSceneBattleSubtitleTemplate::GetEvaluationGroup() const
{
    return TEXT("PostEvaluation");
}

void FKoratMovieSceneBattleSubtitleTemplate::EvaluateSwept(
    const FMovieSceneEvaluationOperand& Operand,
    const FMovieSceneContext& Context,
    const TRange<FFrameNumber>& SweptRange,
    const FPersistentEvaluationData& PersistentData,
    FMovieSceneExecutionTokens& ExecutionTokens) const
{
    ExecutionTokens.Add(FBattleSubtitleExecutionToken(EventData));
}
