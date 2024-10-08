#include "KoratCharacterBlastForteParameter.h"

FKoratCharacterBlastForteParameter::FKoratCharacterBlastForteParameter() {
    this->bWeakSpecialShield = false;
    this->bPenetrate = false;
    this->bDontJostle = false;
    this->bKienzan = false;
    this->bMultiStageOff = false;
    this->ExpendBlastStock = 0;
    this->TriggerExpendBlastStock = 0;
    this->bNonLockUsable = false;
    this->bIsImpossibleGuard = false;
    this->bInterruptibleExplosion = false;
    this->bInterruptibleBarrier = false;
    this->bBackstepWhenNearMode = false;
    this->BackstepWhenWithinDistance = 0.00f;
    this->bTurnBeforeTransition = false;
    this->bTurnCGSection = false;
    this->bTurnHTSection = false;
    this->SureToHitRange = 0.00f;
}

