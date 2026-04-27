#include "MovieSceneTriggerEffectSectionTemplate.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Actor.h"
#include "IMovieScenePlayer.h"
#include "Evaluation/MovieSceneExecutionTokens.h"
#include "Evaluation/MovieScenePreAnimatedState.h"

FMovieSceneTriggerEffectSectionTemplate::FMovieSceneTriggerEffectSectionTemplate()
{
    this->InputType = ESSKeyInputType::UI_Option;
    this->Params = FKoratTriggerEffectParameters();
}

FMovieSceneTriggerEffectSectionTemplate::FMovieSceneTriggerEffectSectionTemplate(const UMovieSceneTriggerEffectSection& Section)
{
    this->InputType = Section.InputType;
    this->Params = Section.Params;
}

EMovieSceneCompletionMode FMovieSceneTriggerEffectSectionTemplate::GetCompletionMode() const
{
    return EMovieSceneCompletionMode::RestoreState;
}

void FMovieSceneTriggerEffectSectionTemplate::Evaluate(
    const FMovieSceneEvaluationOperand& Operand,
    const FMovieSceneContext& Context,
    const FPersistentEvaluationData& PersistentData,
    FMovieSceneExecutionTokens& ExecutionTokens) const
{
}


