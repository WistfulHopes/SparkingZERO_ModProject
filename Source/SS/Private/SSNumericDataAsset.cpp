#include "SSNumericDataAsset.h"

USSNumericDataAsset::USSNumericDataAsset() {
    this->Life = 50000.00f;
    this->DamageRate = 1.00f;
    this->SPGaugeMaxValue = 50000.00f;
    this->InitialSP = 20000.00f;
    this->SPAutoRecoveryLimit = 20000.00f;
    this->SPAutoRecoverySpeed = 3000.00f;
    this->SPChargeSpeed = 4.00f;
    this->SparkingGaugeChargeSpeed = 30000.00f;
    this->PreSparkingGaugeDecreaseSpeed = 10000.00f;
    this->SparkingModeGaugeDecreaseSpeed = 4000.00f;
    this->SuperCounterSPCost = 0.00f;
    this->ZCounterSPCost = 5000.00f;
    this->SelfishnessSPCost = 2500.00f;
    this->SelfishnessSPCostByEnergyBullet = 2500.00f;
    this->GuardCrashedByCombativesBlastSpDamageRate = 1.00f;
    this->BlastStock = 5;
    this->InitialBlastStock = 0;
    this->PursuitBaseLimit = 0;
    this->PursuitLimitDragonHoming = 1;
    this->PursuitLimitVanishingAttack = 1;
    this->PursuitLimitLightningAttack = 1;
    this->PursuitBaseLimitAddAtSparking = 0;
    this->PursuitLimitDragonHomingAddAtSparking = 1;
    this->PursuitLimitVanishingAttackAddAtSparking = 1;
    this->PursuitLimitLightningAttackAddAtSparking = 1;
    this->IdealPositionMidAirKick = 0.00f;
    this->ReactionSplitHighBorder = 0.66f;
    this->ReactionSplitMidBorder = 0.33f;
    this->ReactionSplitLowBorder = 0.33f;
    this->BulletNum = 10;
    this->JumpBulletNum = 4;
    this->JumpBulletSetNum = 2;
    this->DashBulletNum = 4;
    this->RushBulletLimit = -1;
    this->SmashBulletLimit = -1;
    this->RushScale = 1.00f;
    this->RepelActionContinueDistance = 2000.00f;
    this->JumpRepelActionContinueDistance = 2000.00f;
    this->RepelActionContinueCount = 5;
    this->RepelSkillGaugeGainRate = 1.00f;
    this->AttackBreakSkillGaugeGain = 0.00f;
    this->FastAvoidSkillGaugeGain = 0.00f;
    this->UkemiSkillGaugeGain = 0.00f;
    this->ThrowBreakSkillGaugeGain = 0.00f;
    this->BackAttackedSkillGaugeGain = 0.00f;
    this->HPSkillGaugeGain = 0.00f;
    this->SpeedImpactWinSkillGaugeGain = 0.00f;
    this->CrashImpactWinSkillGaugeGain = 0.00f;
    this->BlastImpactWinSkillGaugeGain = 0.00f;
    this->PowerImpactWinSkillGaugeGain = 0.00f;
    this->GuardedSkillGaugeGain = 0.00f;
    this->ImpactStartSkillGaugeGain = 0.00f;
    this->RushOffsetSkillGaugeGain = 0.00f;
    this->CollisionOffsetSkillGaugeGain = 0.00f;
    this->DragonHomingChangeTrajectorySkillGaugeGain = 0.00f;
    this->BurstSmashGaugeGain = 0.00f;
    this->ExParam = 0;
    this->AuraType = EKoratBattleAuraType::Aura;
    this->DownValueLimit = 100;
    this->AbsorptionEnergyGainRate = 1.00f;
    this->AbsorptionBlastEnergyGainRate = 1.00f;
}


