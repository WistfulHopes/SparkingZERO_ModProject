#include "KoratMovieSceneEventSceneImpactTemplate.h"
#include "KoratMovieSceneEventSceneImpactSection.h"
#include "MovieSceneExecutionToken.h"

FKoratMovieSceneEventSceneImpactTemplate::FKoratMovieSceneEventSceneImpactTemplate()
    : RebindEvent00Reference()
    , RebindEvent01Reference()
{
}

FKoratMovieSceneEventSceneImpactTemplate::FKoratMovieSceneEventSceneImpactTemplate(const UKoratMovieSceneEventSceneImpactSection& Section)
    : RebindEvent00Reference(Section.GetRebindEvent00Reference())
    , RebindEvent01Reference(Section.GetRebindEvent01Reference())
{
}

EMovieSceneCompletionMode FKoratMovieSceneEventSceneImpactTemplate::GetCompletionMode() const
{
    return EMovieSceneCompletionMode::RestoreState;
}

void FKoratMovieSceneEventSceneImpactTemplate::Evaluate(
    const FMovieSceneEvaluationOperand& Operand,
    const FMovieSceneContext& Context,
    const FPersistentEvaluationData& PersistentData,
    FMovieSceneExecutionTokens& ExecutionTokens
) const
{
}
