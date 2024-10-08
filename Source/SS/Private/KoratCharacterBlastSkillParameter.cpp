#include "KoratCharacterBlastSkillParameter.h"

FKoratCharacterBlastSkillParameter::FKoratCharacterBlastSkillParameter() {
    this->LungeSpeed = 0.00f;
    this->ReloadTime = 0.00f;
    this->ExpendEnergy = 0;
    this->TriggerExpendEnergy = 0;
    this->ExpendHelth = 0;
    this->StealHelth = 0;
    this->MaxChargeTime = 0.00f;
    this->MaxChargeDamageRate = 0.00f;
    this->bCanBlastImpact = false;
    this->BlastImpactPower = 0;
    this->bCanSpeedImpact = false;
    this->bWeakSpecialShield = false;
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
    this->bForceSetDirectionDamage = false;
    this->bNonLockUsable = false;
    this->BlastImpactCameraType = EKoratBlastImpactCameraType::None;
    this->bGuardCrash = false;
    this->SureToHitRange = 0.00f;
    this->bIsEnableHideNearDestructionStaticMesh = false;
    this->bDoVanishingWhenDoBlastCombo = false;
    this->VanishingDistance = 0.00f;
    this->bBackstepWhenNearMode = false;
    this->BackstepWhenWithinDistance = 0.00f;
    this->bTurnBeforeTransition = false;
    this->bTurnCGSection = false;
    this->bTurnHTSection = false;
}

