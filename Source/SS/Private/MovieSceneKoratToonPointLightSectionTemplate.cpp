#include "MovieSceneKoratToonPointLightSectionTemplate.h"
#include "IMovieScenePlayer.h"
#include "Evaluation/MovieSceneExecutionTokens.h"

FMovieSceneKoratToonPointLightSectionTemplate::FMovieSceneKoratToonPointLightSectionTemplate()
{
}

FMovieSceneKoratToonPointLightSectionTemplate::FMovieSceneKoratToonPointLightSectionTemplate(const UKoratPointLightParameterSection& Section)
    : FMovieSceneParameterSectionTemplate(Section) // Important
{
    Bytes = Section.GetByteParameterNamesAndCurves();
    Integers = Section.GetIntParameterNamesAndCurves();

    // Now check inherited/base parameters
    const TArray<FScalarParameterNameAndCurve>& ScalarCurves = Section.GetScalarCurves();
    const TArray<FBoolParameterNameAndCurve>& BoolCurves = Section.GetBoolCurves();
    const TArray<FVector2DParameterNameAndCurves>& Vector2DCurves = Section.GetVector2DCurves();
    const TArray<FVectorParameterNameAndCurves>& VectorCurves = Section.GetVectorCurves();
    const TArray<FColorParameterNameAndCurves>& ColorCurves = Section.GetColorCurves();
}

EMovieSceneCompletionMode FMovieSceneKoratToonPointLightSectionTemplate::GetCompletionMode() const
{
    return EMovieSceneCompletionMode::RestoreState;
}

void FMovieSceneKoratToonPointLightSectionTemplate::Evaluate(
    const FMovieSceneEvaluationOperand& Operand,
    const FMovieSceneContext& Context,
    const FPersistentEvaluationData& PersistentData,
    FMovieSceneExecutionTokens& ExecutionTokens) const
{
}


