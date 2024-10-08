#include "KoratReceivedDamageParameter.h"

FKoratReceivedDamageParameter::FKoratReceivedDamageParameter() {
    this->AttackType = EKoratActionAttackType::None;
    this->SettleAttackType = EBattleSettleAttackType::None;
    this->HitCheckType = EKoratActionHitCheckType::None;
    this->bIsBulletActor = false;
    this->bIsReactiveGuardableBullet = false;
    this->bIsImpossibleGuardBullet = false;
    this->AttackDirection = EKoratReactionDirection::Default;
    this->bColorSetIsValid = false;
    this->bIsPointLightGuardValid = false;
    this->bIsPointLightGuardBreakValid = false;
    this->bIsPointLightHitValid = false;
    this->ArmorBreakLevel = 0;
    this->Power = 0;
    this->Shave = 0;
    this->bNoKnockDownAttack = false;
    this->bSoftAttack = false;
    this->bAvoidHistep = false;
    this->bBuffAvoidable = false;
    this->bInterruptGuard = false;
    this->bInterruptReflect = false;
    this->AttackPowerMagnification = 0.00f;
    this->Buff = NULL;
    this->bReduceZSearchAfterHit = false;
    this->ReduceZSearchEffectTime = 0.00f;
    this->bDamageCostumeEnable = false;
    this->bDamageCostumeLastHitOnly = false;
    this->bDamageCostumeWreck = false;
    this->bScratchCostumeEnable = false;
    this->ExplosionHitLevel = ECameraZoomType::ZoomNone;
    this->bForceReaction = false;
    this->bSelfishnessAvoidable = false;
    this->bAttackCollision = false;
}

