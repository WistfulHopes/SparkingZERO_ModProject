#include "SSCharacterNumeric.h"

USSCharacterNumeric::USSCharacterNumeric() {
    this->CharacterData = NULL;
    this->NumericData = NULL;
    this->DPData = NULL;
    this->CharacterTypeData = NULL;
    this->OriginalDP = 5;
    this->DestroyedPower = 5;
    this->MaxHPGaugeValue = 50000.00f;
    this->MaxHPGaugeValueBase = 50000.00f;
    this->MaxHPDPScale = 1.00f;
    this->AddMaxHP = 0.00f;
    this->OverrideMaxHPGaugeValue = -1.00f;
    this->IncomingDamageRate = 1.00f;
    this->SPGaugeAutoRecoverySpeed = 1000.00f;
    this->SPGaugeAutoRecoverySpeedSuperZCounter = -1000.00f;
    this->SPGaugeAutoRecoveryLimit = 20000.00f;
    this->SPChargeSpeed = 10000.00f;
    this->MaxSPGaugeValue = 50000.00f;
    this->InitialSP = 20000.00f;
    this->SparkingGaugeChargeSpeed = 10000.00f;
    this->PreSparkingGaugeDecreaseSpeed = 10000.00f;
    this->SparkingModeGaugeDecreaseSpeed = 5000.00f;
    this->BlastGaugeRecoverySpeed = 0.25f;
    this->BlastGaugeRecoverySpeedMultiplier = 1.00f;
    this->MaxBlastStockCount = 5;
    this->InitialBlastStock = 0;
    this->SparkingModeBlastCost = 1;
    this->RevengeCounterBlastCost = 2;
    this->RushHighSpeedMoveExpendSp = 0.00f;
    this->RushHighSpeedMoveRevengeExpendSp = 5000.00f;
    this->NearVanishingAssaultExpendSp = 0.00f;
    this->MidVanishingAssaultExpendSp = 0.00f;
    this->FarVanishingAssaultExpendSp = 0.00f;
    this->TeleportationCounterInputTime = 0.35f;
    this->TeleportationCounterWaitTime = 0.40f;
    this->TeleportationCounterStopRequestTime = -0.70f;
    this->GuardableAngle = 180.00f;
    this->GuardCrashPowerConsumption = 10000.00f;
    this->GuardCrashedByCombativesBlastSpDamageRate = 1.00f;
    this->SuperZCounterTakeBlastCost = 2;
    this->SuperZCounterCatchBlastCost = 2;
    this->SuperZCounterTeleportBlastCost = 2;
    this->SuperZCounterFlickBlastCost = 2;
    this->SuperZCounterDrownOutBlastCost = 2;
    this->SuperZCounterAbsorptionBlastCost = 2;
    this->SuperCounterSPCost = 0.00f;
    this->ZCounterSPCost = 0.00f;
    this->SelfishnessSPCostByCombatives = 0.00f;
    this->SelfishnessSPCostByEnergyBullet = 0.00f;
    this->PursuitPossibleTime = 1.00f;
    this->DragonHomingDecelerationDistance = 1500.00f;
    this->DragonHomingKeepDistance = 500.00f;
    this->DragonHomingInputInfluence = 0.30f;
    this->DragonHomingInputInfluenceAttenuationDistance = 1000.00f;
    this->DragonHomingKeepDistanceInputInfluence = 0.30f;
    this->DragonSmashTransitionDistance = 1500.00f;
    this->DragonSmashChargeEndDistance = 200.00f;
    this->PursuitBaseLimit = 0;
    this->PursuitLimitDragonHoming = 1;
    this->PursuitLimitVanishingAttack = 1;
    this->PursuitLimitLightningAttack = 1;
    this->PursuitBaseLimitAddAtSparking = 0;
    this->PursuitLimitDragonHomingAddAtSparking = 1;
    this->PursuitLimitVanishingAttackAddAtSparking = 1;
    this->PursuitLimitLightningAttackAddAtSparking = 1;
    this->IdealPositionMidAirKick = 0.00f;
    this->StunReactionMaxRecoverySP = 20000.00f;
    this->StunReactionRecoverySpeed = 0.50f;
    this->StunReactionInputRecoverySpeed = 0.01f;
    this->LimitBoostSPCost = 10000.00f;
    this->LimitBoostRecoverySpeed = 6000.00f;
    this->LimitBoostInputRecoverySpeed = 100.00f;
    this->FallRecoveryWaitTime = 0.00f;
    this->LiftRecoveryWaitTime = 0.00f;
    this->FallRecoveryToLandingBorderDistance = 100.00f;
    this->FallStopRecoveryWaitTime = 0.00f;
    this->DamageScale = 1.00f;
    this->ChangeCharacterCooldown = 20.00f;
    this->BlastBoostCostNormal = 10000.00f;
    this->BlastBoostCostSparking = 10000.00f;
    this->BlastBoostNormalMagnification = 1.10f;
    this->BlastBoostSparkingMagnification = 1.20f;
    this->ExParam = 0;
    this->AuraType = EKoratBattleAuraType::Aura;
    this->DownValueLimit = 100;
    this->BlastComboDamageMagnification = 1.00f;
    this->LifeHealMaxAtBench = 10000.00f;
    this->LifeHealPerSecAtBench = 200.00f;
    this->SPHealPerSecAtBench = 200.00f;
}

float USSCharacterNumeric::GetMaxSPGaugeValue() const {
    return 0.0f;
}

float USSCharacterNumeric::GetMaxHPGaugeValue() const {
    return 0.0f;
}

float USSCharacterNumeric::GetDamageScale() const {
    return 0.0f;
}


