#include "SSCharacterCombativesParameter.h"

FSSCharacterCombativesParameter::FSSCharacterCombativesParameter() {
    this->CombativesData = NULL;
    this->ActionData = NULL;
    this->bPointLightIsValid = false;
    this->bRimLightIsValid = false;
    this->bIsPointLightHitValid = false;
    this->HitEffectType = ESSHitEffectType::Small;
    this->bIsPointLightHitAfterGaveHitStopValid = false;
    this->bIsPointLightHitAfterReceivedHitStopValid = false;
    this->bIsPointLightGuardValid = false;
    this->bIsPointLightGuardAfterGaveHitStopValid = false;
    this->bIsPointLightGuardAfterReceivedHitStopValid = false;
    this->bIsPointLightRushOffsetValid = false;
    this->bIsPointLightRushOffsetAfterGaveHitStopValid = false;
    this->bIsPointLightCollisionOffsetValid = false;
    this->bIsPointLightCollisionOffsetAfterGaveHitStopValid = false;
    this->bIsPointLightExImpactValid = false;
    this->bIsPointLightExImpactAfterGaveHitStopValid = false;
    this->bIsPointLightGuardBreakValid = false;
    this->bIsPointLightGuardBreakAfterGaveHitStopValid = false;
    this->bIsPointLightGuardBreakAfterReceivedHitStopValid = false;
    this->bIsPointLightAttackBreakValid = false;
    this->bIsPointLightAttackBreakAfterGaveHitStopValid = false;
    this->bIsPointLightAttackBreakAfterReceivedHitStopValid = false;
    this->bIsGiant_DamageMovement = false;
    this->bIsGiant_HitStop = false;
    this->bIsGiant_GuardMovement = false;
    this->bIsGiant_GuardStop = false;
    this->bIsGiant_GuardBreakMovement = false;
    this->bIsGiant_GuardBreakStop = false;
    this->bIsGiant_AttackBreakMovement = false;
    this->bIsGiant_AttackBreakStop = false;
    this->bIsGiant_RushOffsetMovement = false;
    this->bIsGiant_RushOffsetStop = false;
    this->bIsGiant_CollisionOffsetMovement = false;
    this->bIsGiant_CollisionOffsetStop = false;
    this->bIsGiant_ExImpactMovement = false;
    this->bIsGiant_ExImpactStop = false;
}

