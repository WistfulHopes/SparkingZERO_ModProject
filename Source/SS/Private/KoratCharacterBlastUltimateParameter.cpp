#include "KoratCharacterBlastUltimateParameter.h"

FKoratCharacterBlastUltimateParameter::FKoratCharacterBlastUltimateParameter() {
    this->LungeSpeed = 0.00f;
    this->ReloadTime = 0.00f;
    this->ExpendEnergy = 0;
    this->TriggerExpendEnergy = 0;
    this->ExpendHelth = 0;
    this->StealHelth = 0;
    this->MaxChargeTime = 0.00f;
    this->MaxChargeDamageRate = 0.00f;
    this->MaxChargeSpeedScale = 0.00f;
    this->MaxChargeHomingScale = 0.00f;
    this->bCanBlastImpact = false;
    this->BlastImpactPower = 0;
    this->bCanSpeedImpact = false;
    this->bWeakSpecialShield = false;
    this->bNoDisableSnapHorizontalInNearGround = false;
    this->bToAimBodyBlendTimeIsZero = false;
    this->TransitionConditionHitBulletCount = 0;
    this->TransitionConditionFinishedBulletCount = 0;
    this->bGaveAfterStateToBlowFalling = false;
    this->bGaveAfterStateToBlowFallingAlsoSIOT = false;
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
    this->bNonLockUsable = false;
    this->BlastImpactCameraType = EKoratBlastImpactCameraType::None;
    this->ConsecutiveInputMaxNum = 0;
    this->MoveHitDistance = 0.00f;
    this->MoveLimitTime = 0.00f;
    this->bGuardCrash = false;
    this->SureToHitRange = 0.00f;
    this->bIsEnableHideNearDestructionStaticMesh = false;
    this->bInterruptibleExplosion = false;
    this->bInterruptibleBarrier = false;
    this->bInterruptibleFrontBarrier = false;
    this->bBackstepWhenNearMode = false;
    this->BackstepWhenWithinDistance = 0.00f;
    this->bTurnBeforeTransition = false;
    this->bTurnCGSection = false;
    this->bTurnHTSection = false;
}

