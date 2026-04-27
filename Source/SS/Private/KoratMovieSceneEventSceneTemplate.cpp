#include "KoratMovieSceneEventSceneTemplate.h"
#include "KoratMovieSceneEventSceneSection.h"
#include "KoratMovieSceneEventSceneSectionData.h"

FKoratMovieSceneEventSceneTemplate::FKoratMovieSceneEventSceneTemplate()
{
    bFireEventsWhenForwards = true;
    bFireEventsWhenBackwards = true;
}
FKoratMovieSceneEventSceneTemplate::FKoratMovieSceneEventSceneTemplate(const UKoratMovieSceneEventSceneSection& Section)
{
    EventData = Section.GetEventData();
    bFireEventsWhenForwards = true;
    bFireEventsWhenBackwards = true;
}

// --- Completion mode ---
EMovieSceneCompletionMode FKoratMovieSceneEventSceneTemplate::GetCompletionMode() const
{
    return EMovieSceneCompletionMode::RestoreState;
}

// --- Evaluation group ---
FName FKoratMovieSceneEventSceneTemplate::GetEvaluationGroup() const
{
    return TEXT("PostEvaluation");
}

void FKoratMovieSceneEventSceneTemplate::EvaluateSwept(
    const FMovieSceneEvaluationOperand& Operand,
    const FMovieSceneContext& Context,
    const TRange<FFrameNumber>& SweptRange,
    const FPersistentEvaluationData& PersistentData,
    FMovieSceneExecutionTokens& ExecutionTokens) const
{
    
}
