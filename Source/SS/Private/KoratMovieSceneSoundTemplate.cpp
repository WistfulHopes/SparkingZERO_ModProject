#include "KoratMovieSceneSoundTemplate.h"

FKoratMovieSceneSoundTemplate::FKoratMovieSceneSoundTemplate() {
}

FKoratMovieSceneSoundTemplate::FKoratMovieSceneSoundTemplate(const UKoratMovieSceneSoundSceneSection& Section)
    : FMovieSceneParameterSectionTemplate(Section) // Important
{
    BoolCurves = Section.GetBoolCurves();
}
EMovieSceneCompletionMode FKoratMovieSceneSoundTemplate::GetCompletionMode() const
{
    return EMovieSceneCompletionMode::RestoreState;
}

void FKoratMovieSceneSoundTemplate::Evaluate(
    const FMovieSceneEvaluationOperand& Operand,
    const FMovieSceneContext& Context,
    const FPersistentEvaluationData& PersistentData,
    FMovieSceneExecutionTokens& ExecutionTokens) const
{
}