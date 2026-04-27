#include "MovieSceneTriggerEffectSection.h"

UMovieSceneTriggerEffectSection::UMovieSceneTriggerEffectSection() {
    this->InputType = ESSKeyInputType::BattleCharge;
    this->Params.Strengths.Init(0, 10);
}


