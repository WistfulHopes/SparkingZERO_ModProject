#include "SSBlastForteParamDataAssetRecord.h"

FSSBlastForteParamDataAssetRecord::FSSBlastForteParamDataAssetRecord() {
    this->bPenetrate = false;
    this->bDontJostle = false;
    this->bKienzan = false;
    this->bMultiStageOff = false;
    this->bNonLockUsable = false;
    this->bIsImpossileGuard = false;
    this->SureToHitRange = 0.00f;
    this->bInterruptibleExplosion = false;
    this->bInterruptibleBarrier = false;
    this->bInterruptibleFrontBarrier = false;
    this->bBackstepWhenNearMode = false;
    this->BackstepWhenWithinDistance = 0.00f;
    this->bTurnBeforeTransition = false;
    this->bTurnCGSection = false;
    this->bTurnHTSection = false;
    this->bNoAutoGuard = false;
    this->bNoHitCheckCombatives = false;
}

