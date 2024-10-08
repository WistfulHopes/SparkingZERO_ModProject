#include "SSCombativesDataAsset.h"

USSCombativesDataAsset::USSCombativesDataAsset() {
    this->Power = 300;
    this->PowerDpMultiplier.AddDefaulted(10);
    this->Shave = 0;
    this->EnergyDamage = 0;
    this->EnergyGain = 0;
    this->SmashLevelGaugeIncrement = 0.00f;
    this->bNoKnockDownAttack = false;
    this->MovementTransition = EKoratCharacterMovementTransition::Stop;
    this->SuperZCounterTakeType = EKoratSuperZCounterTakeType::None;
    this->bZCounterAvoidable = false;
    this->bSuperCounterAvoidable = false;
    this->bSuperCounterAvoidableRevengeCounterShort = false;
    this->bSuperSelfishness = false;
    this->bBuffAvoidable = false;
    this->bAvoidHistep = false;
    this->bPossibleAscertain = false;
    this->bInterruptGuard = false;
    this->bReduceZSearchAfterHit = false;
    this->ReduceZSearchEffectTime = 0.00f;
    this->bIsDownTargetAttackableCombatives = false;
    this->bDamageCostumeEnable = false;
    this->bDamageCostumeLastHitOnly = false;
    this->bDamageCostumeWreck = false;
    this->bScratchCostumeEnable = false;
    this->bNoMovementEnduringArmor = false;
    this->bNoStopEnduringArmor = false;
    this->DestructionFieldScale = 1.00f;
    this->bReceiveSelfDamage = false;
    this->SelfDamagePower = 0.00f;
    this->SelfDamagePowerDpMultiplier.AddDefaulted(10);
    this->bEnergyBulletCollision = false;
    this->EnergyBulletCollisionPriority = 0;
    this->bEnergyBullectCollisionSpecial = false;
    this->bForceDestroyBullet = false;
    this->OffsetPitch = 180.00f;
    this->OffsetYaw = 180.00f;
    this->HitDirectionRule = ESSBulletHitDirectionRule::Bullet;
}


