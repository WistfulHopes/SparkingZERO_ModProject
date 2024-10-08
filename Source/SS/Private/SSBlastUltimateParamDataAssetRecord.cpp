#include "SSBlastUltimateParamDataAssetRecord.h"

FSSBlastUltimateParamDataAssetRecord::FSSBlastUltimateParamDataAssetRecord() {
    this->TransitionConditionHitBulletCount = 0;
    this->TransitionConditionFinishedBulletCount = 0;
    this->bPenetrate = false;
    this->bDontJostle = false;
    this->bKienzan = false;
    this->bMultiStageOff = false;
    this->bMapChangeEscapeEvenet = false;
    this->bMapChangeDestruct = false;
    this->bMapChangeDestructDemoGuard = false;
    this->bImpossibleGuard = false;
    this->bImpossibleGuardFullCharge = false;
    this->bEnableSteel = false;
    this->bNoRecoverSteel = false;
    this->bKamehameHa = false;
    this->bSelfDestruction = false;
    this->bNeedKaiouken = false;
    this->bExScale = false;
    this->bForceSetDirectionDamage = false;
    this->bBodyChange = false;
    this->BlastOperationData = NULL;
    this->bNonLockUsable = false;
    this->BlastImpactCameraType = EKoratBlastImpactCameraType::None;
    this->SuperZCounterType = EKoratSuperZCounterType::None;
    this->MoveHitDistance = 0.00f;
    this->MoveLimitTime = 0.00f;
    this->MoveType = EBlastDashMoveType::UncontrollableStraight;
    this->MoveTypeTargetInputInfluence = 0.00f;
    this->MoveTypeTargetInputInfluenceAttenuationDistance = 0.00f;
    this->MoveTurnSpeed = 0.00f;
    this->MoveNeutralTurnSpeed = 0.00f;
    this->bGuardCrash = false;
    this->SureToHitRange = 0.00f;
    this->bBackstepWhenNearMode = false;
    this->BackstepWhenWithinDistance = 0.00f;
    this->bTurnBeforeTransition = false;
    this->bTurnCGSection = false;
    this->bTurnHTSection = false;
}

