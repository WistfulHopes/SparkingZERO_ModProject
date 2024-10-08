#include "KoratCharacterCounterCondition.h"

FKoratCharacterCounterCondition::FKoratCharacterCounterCondition() {
    this->bInvincible = false;
    this->bDetectedSignCombatives = false;
    this->bSuccessAscertain = false;
    this->bSuccessSonicSway = false;
    this->bSuccessFastAvoidance = false;
    this->bSuccessZCounter = false;
    this->bSuccessSuperCounter = false;
    this->SuccessSuperZCounter = EKoratSuperZCounterTakeType::None;
    this->bSuccessSelfishness = false;
    this->bSelfishnessByCombatives = false;
}

