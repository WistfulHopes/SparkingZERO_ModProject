#include "KoratBuffPhaseDataAsset.h"

UKoratBuffPhaseDataAsset::UKoratBuffPhaseDataAsset() {
    this->bDontOverrideIfAlready = false;
    this->bResetDamageReactionFlag = false;
    this->bEnableNumbEndSecMoreThan = false;
    this->NumbEndSecMoreThan = 0.00f;
    this->EffectiveTermType = 2;
    this->EffectiveTime = 1.80f;
    this->EffectiveCount = 0;
    this->bAscertainCountered = false;
    this->bSuperCountered = false;
    this->bDelayAction = false;
    this->bDirectBuff = false;
    this->SpecialType = EKoratBuffSpecialType::None;
    this->bAfterImageDodge = true;
    this->DodgeMoveChangeDistance = -1.00f;
    this->bDodgeMoveChangeAtBulletAttack = false;
    this->bPassOnToNewCharacter = false;
    this->ArmorLevelUp = 0;
    this->bNumb = false;
    this->bPossibleRevengeCounterNumb = false;
    this->ChargeHelth = 0;
    this->ChargeEnergy = 0;
    this->bSearchOff = false;
    this->bHideInDemo = false;
    this->bFinishToParticularAction = false;
    this->bIsDisplayBuffDirectionList = false;
}


