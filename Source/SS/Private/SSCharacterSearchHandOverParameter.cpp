#include "SSCharacterSearchHandOverParameter.h"

FSSCharacterSearchHandOverParameter::FSSCharacterSearchHandOverParameter() {
    this->Status = EKoratBattleSearchStatus::None;
    this->KeepAutoSearchDistanceSec = 0.00f;
    this->AuraSearchKeepSec = 0.00f;
    this->TargetKeepViewSec = 0.00f;
    this->bReduceZSearch = false;
    this->ReduceZSearchEffectTime = 0.00f;
}

