#include "KoratBuffPhaseDataAsset.h"

UKoratBuffPhaseDataAsset::UKoratBuffPhaseDataAsset() {
    this->bDontOverrideIfAlready = false;
    this->bResetDamageReactionFlag = false;
    this->bEnableNumbEndSecMoreThan = false;
    this->NumbEndSecMoreThan = 0.00f;
    this->EffectiveTermType = 2;
    this->EffectiveTime = 1.80f;
    this->EffectiveCount = 0;
    this->bDelayAction = false;
    this->bDirectBuff = false;
    this->SpecialType = EKoratBuffSpecialType::None;
    this->bAfterImageDodge = true;
    this->ArmorLevelUp = 0;
    this->bNumb = false;
    this->ChargeHelth = 0;
    this->ChargeEnergy = 0;
    this->bSearchOff = false;
    this->bHideInDemo = false;
    this->bFinishToParticularAction = false;
}


