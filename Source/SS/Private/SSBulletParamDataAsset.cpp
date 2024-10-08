#include "SSBulletParamDataAsset.h"

USSBulletParamDataAsset::USSBulletParamDataAsset() {
    this->Power = 250;
    this->PowerDpMultiplier.AddDefaulted(10);
    this->Shave = 50;
    this->BeamPower = 250;
    this->BeamShave = 50;
    this->ExpendEnergy = 0;
    this->RepelSkillGaugeGain = 0.00f;
    this->bSoftAttack = false;
    this->LifeSpan = 0.00f;
    this->bCanLifeSpanEndInMultiHit = false;
    this->LifeSpanAfterPassedTarget = 0.00f;
    this->FireNum = 1;
    this->FireLimit = 0;
    this->AttackType = EKoratActionAttackType::EnergyBullet;
    this->CollisionShapeClass = NULL;
    this->CollisionSizeCurve = NULL;
    this->CollisionHeightOverriveCurve = NULL;
    this->CharacterCollisionSize = 100.00f;
    this->CharacterFirstHitType = ESSBulletCharacterFirstHitType::SingleHit;
    this->CollisionRevibeNum = 1;
    this->CollisionRevibeSpan = 1.00f;
    this->CharacterLastHitType = ESSBulletCharacterLastHitType::PlayOT;
    this->LifeSpanAfterCharacterLastHit = 0.00f;
    this->GeometryCollisionSize = 32.00f;
    this->GeometryFirstHitType = ESSBulletGeometryFirstHitType::SingleHit;
    this->GeometryCollisionRevibeNum = 1;
    this->GeometryCollisionRevibeSpan = 1.00f;
    this->GeometryLastHitType = ESSBulletGeometryLastHitType::PlayOT;
    this->ClashCollisionSize = 100.00f;
    this->EnergyBullectCollisionPriority = 0;
    this->bOverrideBeamCollisionSize = false;
    this->BeamCollisionSize = 0.00f;
    this->StatusAtStart = ESSBulletStatusAtStart::Homing;
    this->StartPosition = ESSBulletStartPosition::Normal;
    this->ShotRange = 0.00f;
    this->HomingAngleLimitAtStart = 60.00f;
    this->HomingAngleLimitAtStartYaw = 60.00f;
    this->DirectionCurve = NULL;
    this->bRootFollowsStartPosition = false;
    this->bRootFollowsStartRotation = false;
    this->TargetPointDiffusionRadius = 0.00f;
    this->AngleLimitAtReflect = 60.00f;
    this->bHomingAtReflect = false;
    this->bOverrideMoveParamAtReflect = false;
    this->bIsReactiveGuardable = false;
    this->HitDirectionRule = ESSBulletHitDirectionRule::Bullet;
    this->bEnableHitDirectionPitchLock = false;
    this->HitDirectionPitch = 0.00f;
    this->bEnableSplitHit = false;
    this->SplitHeight = 0.00f;
    this->BottomHitDirectionPitch = 0.00f;
    this->bDamageCostumeEnable = false;
    this->bDamageCostumeLastHitOnly = false;
    this->bDamageCostumeWreck = false;
    this->bScratchCostumeEnable = false;
    this->bImpossibleGuard = false;
    this->bImpossibleReflect = false;
    this->bImpossibleAbsorption = false;
    this->bInterruptGuard = false;
    this->bInterruptReflect = false;
    this->bFinishAtOwnerDamage = false;
    this->bEnergyBullectCollisionSpecial = false;
    this->bEnergyBullectCollisionInvincible = false;
    this->bIsSpecialShield = false;
    this->bBlastImpactBulletShift = false;
    this->BlastImpactBulletShiftRate = 1.00f;
    this->BlastImpactBulletScale = 1.00f;
    this->bAvoidHistep = false;
    this->bBuffAvoidable = false;
    this->bSelfishnessAvoidable = false;
    this->bIgnoreActionTarget = false;
    this->DestructionFieldScale = 1.00f;
    this->bReduceZSearchAfterHit = false;
    this->ReduceZSearchEffectTime = 0.00f;
    this->bReceiveSelfDamage = false;
    this->SelfDamagePower = 0.00f;
    this->SelfDamagePowerDpMultiplier.AddDefaulted(10);
    this->BuffIndex = 0;
    this->ExplosionHitLevel = ECameraZoomType::ZoomNone;
}

float USSBulletParamDataAsset::GetMaxPower() const {
    return 0.0f;
}

void USSBulletParamDataAsset::Check() {
}


