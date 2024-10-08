#include "SSAiLevelProbability.h"

FSSAiLevelProbability::FSSAiLevelProbability() {
    this->MinProbability = 0;
    this->MaxProbability = 0;
    this->LevelCurve = NULL;
    this->SortId = 0;
    this->CoolDownTime = 0.00f;
}

