#include "KoratMovieSceneEventSceneFpsCameraTemplate.h"
#include "KoratMovieSceneEventSceneFpsCameraSection.h"

FKoratMovieSceneEventSceneFpsCameraTemplate::FKoratMovieSceneEventSceneFpsCameraTemplate()
    : LookAtReference()
    , Enable()
    , Alpha()
{
}

FKoratMovieSceneEventSceneFpsCameraTemplate::FKoratMovieSceneEventSceneFpsCameraTemplate(const UKoratMovieSceneEventSceneFpsCameraSection& Section)
    : LookAtReference(Section.GetLookAtReference())
    , Enable(Section.GetEnable())
    , Alpha(Section.GetAlpha())
{
}

void FKoratMovieSceneEventSceneFpsCameraTemplate::Evaluate(
    const FMovieSceneEvaluationOperand& Operand,
    const FMovieSceneContext& Context,
    const FPersistentEvaluationData& PersistentData,
    FMovieSceneExecutionTokens& ExecutionTokens
) const
{
}
