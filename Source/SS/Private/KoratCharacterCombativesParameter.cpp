#include "KoratCharacterCombativesParameter.h"

FKoratCharacterCombativesParameter::FKoratCharacterCombativesParameter() {
    this->Power = 0;
    this->Shave = 0;
    this->EnergyDamage = 0;
    this->EnergyGain = 0;
    this->bNoKnockDownAttack = false;
    this->HitActionCameraData = NULL;
    this->GuardActionCameraData = NULL;
    this->RushOffsetActionCameraData = NULL;
    this->CollisionOffsetActionCameraData = NULL;
    this->ExImpactActionCameraData = NULL;
    this->AttackDiretion = EKoratDirection::Front;
    this->MovementTransition = EKoratCharacterMovementTransition::None;
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
    this->ReduceAuraSearchDistance = 0.00f;
    this->ReduceAutoSearchDistance = 0.00f;
    this->ReduceZSearchEffectTime = 0.00f;
    this->bIsDownTargetAttackableCombatives = false;
    this->bDamageCostumeEnable = false;
    this->bDamageCostumeLastHitOnly = false;
    this->bDamageCostumeWreck = false;
    this->bScratchCostumeEnable = false;
    this->bNoMovementEnduringArmor = false;
    this->bNoStopEnduringArmor = false;
    this->bReceiveSelfDamage = false;
    this->SelfDamagePower = 0.00f;
    this->bEnergyBullectCollision = false;
    this->EnergyBullectCollisionPriority = 0;
    this->bEnergyBullectCollisionSpecial = false;
    this->bForceDestroyBullet = false;
    this->OffsetPitch = 0.00f;
    this->OffsetYaw = 0.00f;
    this->HitDirectionRule = ESSBulletHitDirectionRule::Bullet;
}

