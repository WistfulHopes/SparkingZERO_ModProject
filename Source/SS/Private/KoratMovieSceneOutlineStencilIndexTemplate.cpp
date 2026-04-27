#include "KoratMovieSceneOutlineStencilIndexTemplate.h"
#include "KoratMovieSceneOutlineStencilIndexSection.h"
#include "MovieSceneExecutionToken.h"

FKoratMovieSceneOutlineStencilIndexTemplate::FKoratMovieSceneOutlineStencilIndexTemplate()
    : Stencil()
{
}

FKoratMovieSceneOutlineStencilIndexTemplate::FKoratMovieSceneOutlineStencilIndexTemplate(const UKoratMovieSceneOutlineStencilIndexSection& Section)
    : Stencil(Section.GetStencil())
{
}

EMovieSceneCompletionMode FKoratMovieSceneOutlineStencilIndexTemplate::GetCompletionMode() const
{
    return EMovieSceneCompletionMode::RestoreState;
}

void FKoratMovieSceneOutlineStencilIndexTemplate::Evaluate(
    const FMovieSceneEvaluationOperand& Operand,
    const FMovieSceneContext& Context,
    const FPersistentEvaluationData& PersistentData,
    FMovieSceneExecutionTokens& ExecutionTokens
) const
{
}
