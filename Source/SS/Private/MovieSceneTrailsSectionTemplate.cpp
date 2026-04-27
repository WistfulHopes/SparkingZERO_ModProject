#include "MovieSceneTrailsSectionTemplate.h"
#include "MovieSceneTrailsSection.h"

FMovieSceneTrailsSectionTemplate::FMovieSceneTrailsSectionTemplate() {
    this->WidthScaleMode = ETrailWidthMode_FromCentre;
    this->WidthScaleScalar = 0.00f;
}

FMovieSceneTrailsSectionTemplate::FMovieSceneTrailsSectionTemplate(const UMovieSceneTrailsSection& Section)
{
    FirstSocketName = Section.GetFirstSocketName();
    SecondSocketName = Section.GetSecondSocketName();
    WidthScaleMode = Section.GetWidthScaleMode();
    WidthScaleScalar = Section.GetWidthScaleScalar();
    SectionRange = Section.GetRange();
}

// --- Completion mode ---
EMovieSceneCompletionMode FMovieSceneTrailsSectionTemplate::GetCompletionMode() const
{
    return EMovieSceneCompletionMode::RestoreState;
}

void FMovieSceneTrailsSectionTemplate::Evaluate(
    const FMovieSceneEvaluationOperand& Operand,
    const FMovieSceneContext& Context,
    const FPersistentEvaluationData& PersistentData,
    FMovieSceneExecutionTokens& ExecutionTokens
) const
{
}
