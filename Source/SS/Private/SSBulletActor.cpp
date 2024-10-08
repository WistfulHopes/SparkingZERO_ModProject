#include "SSBulletActor.h"
#include "Components/SceneComponent.h"
#include "SSBulletSceneComponent.h"
#include "SSRandom.h"
#include "Templates/SubclassOf.h"

ASSBulletActor::ASSBulletActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USSBulletSceneComponent>(TEXT("Scene"));
    this->ReflectedBeamLifeSpan = 0.50f;
    this->OTBulletSpeedScale = 0.05f;
    this->bOTBulletMoveStopByCollision = true;
    this->TransformHistoryIntervalLength = 100.00f;
    this->BeamCollisionStraightCheckDegree = 1.00f;
    this->OwnerCharacter = NULL;
    this->SupporterIndex = -1;
    this->ChargeLv = 0;
    this->bEndChargeRequest = false;
    this->bLifeSpanEndRequest = false;
    this->bCaptureRequest = false;
    this->bFirstShotHasInvalidate = false;
    this->MultiHitCharacterCounter = 0;
    this->MultiHitGeometryCounter = 0;
    this->BulletActorStatus = ESSBulletActorStatus::Initial;
    this->ElapsedTime = 0.00f;
    this->CollisionElapsedTime = 0.00f;
    this->Speed = 0.00f;
    this->GaveDamagePlayerSide = 0;
    this->bRootFollowsStartPosition = false;
    this->bRootFollowsStartRotation = false;
    this->RepelSkillGaugeGain = 0.00f;
    this->bReflected = false;
    this->bNoReflect = false;
    this->ReflectRequest = ESSBulletActorAfterReflectRequest::None;
    this->ReflectEffect = ESSBulletAfterReflectedEffect::Reflect;
    this->ReflectCharacter = NULL;
    this->bDisableHomingAtReflected = false;
    this->ApproachEvent2DDistance = 0.00f;
    this->ApproachEvent3DDistance = 0.00f;
    this->ExternalNotify = 0;
    this->StatusAfterCharge = ESSBulletActorStatus::MoveBulletUnHoming;
    this->bIsBeam = false;
    this->bUseDelicateBeam = false;
    this->DistanceDelicateBeamEnableHistoryPointSqr = 10000.00f;
    this->bIsAfterDemo = false;
    this->bIsPlayedDemoSkipExplosion = false;
    this->bIgnoreActionTarget = false;
    this->HomingTargetActor = NULL;
    this->TargetPointDiffusionRadius = 0.00f;
    this->bPassedTarget = false;
    this->StatusBeforStartingMultiHit = ESSBulletActorStatus::Initial;
    this->IsBottomHitAtMultiHit = false;
    this->MultiHitrTimer = 0.00f;
    this->StatusBeforStartingControll = ESSBulletActorStatus::Initial;
    this->ReflectTimer = 0.00f;
    this->bDestroyedByBullet = false;
    this->bBeamClash = false;
    this->ClashActor = NULL;
    this->PlayOTOnlyAtClash = false;
    this->LifeSpan = 0.00f;
    this->bCanLifeSpanEndInMultiHit = false;
    this->LifeSpanAfterPassedTarget = 0.00f;
    this->HomingAngleLimitAtStart = 0.00f;
    this->HomingAngleLimitAtStartYaw = 0.00f;
    this->StatusAtStart = ESSBulletStatusAtStart::Homing;
    this->StartPosition = ESSBulletStartPosition::Normal;
    this->ShotRange = 0.00f;
    this->DirectionCurve = NULL;
    this->bLockRoll = false;
    this->RollAngleLimit = 55.00f;
    this->RollScale = 1.00f;
    this->OriginalRollAngle = 0.00f;
    this->bOverrideMoveParamAtReflect = false;
    this->SpeedScale = 0.00f;
    this->HomingScale = 0.00f;
    this->SpeedRandScale = 0.00f;
    this->HomingRandScale = 0.00f;
    this->BulletWindMotorRadius = 0.00f;
    this->BulletWindMotorSpeed = 0.00f;
    this->SpeedScaleforBlastImpact = 0.00f;
    this->bColorSetIsValid = false;
    this->bPointLightIsValid = false;
    this->bIsPointLightReflectValid = false;
    this->bIsPointLightWaitForReflectValid = false;
    this->bIsPointLightAutoReflectValid = false;
    this->bIsPointLightExplosionCancelValid = false;
    this->bIsPointLightEraseExplosionValid = false;
    this->bIsBlastImpactBullet = false;
    this->bBlastImpactBulletShift = false;
    this->BlastImpactBulletShiftRate = 0.00f;
    this->CollisionShape = NULL;
    this->CollisionSizeCurve = NULL;
    this->CollisionHeightOverriveCurve = NULL;
    this->bOverrideBeamCollisionSize = false;
    this->BeamCollisionSize = 0.00f;
    this->CharacterCollisionSize = 0.00f;
    this->GeometryCollisionSize = 0.00f;
    this->ClashCollisionSize = 0.00f;
    this->ScaledCharacterCollisionSize = 0.00f;
    this->ScaledCharacterCollisionHeight = 0.00f;
    this->ScaledGeometryCollisionSize = 0.00f;
    this->ScaledGeometryCollisionHeight = 0.00f;
    this->ScaledClashCollisionSize = 0.00f;
    this->ScaledClashCollisionHeight = 0.00f;
    this->CharacterFirstHitType = ESSBulletCharacterFirstHitType::SingleHit;
    this->CharacterCollisionRevibeNum = 0;
    this->CharacterCollisionRevibeSpan = 0.00f;
    this->CharacterLastHitType = ESSBulletCharacterLastHitType::PlayOT;
    this->LifeSpanAfterCharacterLastHit = 0.00f;
    this->GeometryFirstHitType = ESSBulletGeometryFirstHitType::SingleHit;
    this->GeometryCollisionRevibeNum = 0;
    this->GeometryCollisionRevibeSpan = 0.00f;
    this->GeometryLastHitType = ESSBulletGeometryLastHitType::PlayOT;
    this->EnergyBullectCollisionPriority = 0;
    this->bEnergyBullectCollisionSpecial = false;
    this->bEnergyBullectCollisionInvincible = false;
    this->bIsSpecialShield = false;
    this->bWeakSpecialShield = false;
    this->bFinishAtOwnerDamage = false;
    this->HitDirectionRule = ESSBulletHitDirectionRule::Bullet;
    this->bEnableSplitHit = false;
    this->SplitHitHeight = 0.00f;
    this->bEnableHitDirectionPitchLock = false;
    this->HitDirectionPitch = 0.00f;
    this->BottomHitDirectionPitch = 0.00f;
    this->bImpossibleReflect = false;
    this->bImpossibleAbsorption = false;
    this->SuperZCounterType = EKoratSuperZCounterType::None;
    this->bImpossibleSuperZCounterAbsorption = false;
    this->AngleLimitAtReflect = 0.00f;
    this->bHomingAtReflect = false;
    this->bReceiveSelfDamage = false;
    this->bOptimizeMode = false;
    this->bIsEnabled = true;
    this->bIsCollisionEnabled = true;
    this->bRunCollisionTestThisFrame = false;
    this->Random = CreateDefaultSubobject<USSRandom>(TEXT("Random_ASSBulletActor"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->BulletVisualComponent = CreateDefaultSubobject<USceneComponent>(TEXT("BulletVisual"));
    this->ClashHitComponent = NULL;
    this->DebugPreBulletStatus = ESSBulletActorStatus::Initial;
    this->BulletWindMotorComponent = NULL;
    this->BulletVisualComponent->SetupAttachment(RootComponent);
}

void ASSBulletActor::WaitForTransitActionOfOwnerCharacter(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const TArray<FKoratActionDataList>& InAfterActionList) {
}

void ASSBulletActor::WaitForNotify(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, int32& OutCode) {
}

void ASSBulletActor::WaitForJumpSectionOfOwnerCharacter(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const FKoratActionDataList InAction, const FName InSectionName) {
}

void ASSBulletActor::StartBullet(ASSCharacter* FromCharacter, FName FromCharacterBone, FKoratEnergyBulletDirectionDataList DirectionData, AActor* InTargetActor, FKoratCharacterBoneDataList TargetBone, ESSBulletStatusAtStart StartStatus) {
}

ASSLevelSequenceActor* ASSBulletActor::SpawnTraceLevelSequence(FName InName, ULevelSequence* InLevelSequence) {
    return NULL;
}

ASSLevelSequenceActor* ASSBulletActor::SpawnOneShotLevelSequence(ULevelSequence* InLevelSequence, const FTransform& InOverrideTransform) {
    return NULL;
}

ASSBulletActor* ASSBulletActor::SpawnBullet(TSubclassOf<ASSBulletActor> InBluePrint, FKoratActionDataList InAction, AActor* InTargetActor, FKoratBulletKeyDataList InBulletKey) {
    return NULL;
}

void ASSBulletActor::SetSpeedScaleforBlastImpact(float InSpeedScale) {
}

bool ASSBulletActor::SetSourceColor(const FKoratEffectColorDataDetail& InColor) {
    return false;
}

void ASSBulletActor::SetEnableCollision(bool bInEnable) {
}

void ASSBulletActor::RequestTransitionActionToOwnerCharacter(const FKoratActionDataList InBeforeAction, const FKoratActionDataList InAfterAction) {
}

void ASSBulletActor::RequestJumpSectionToOwnerCharacter(const FKoratActionDataList InAction, const FName InSectionName) {
}

void ASSBulletActor::PlayReflectLevelSequence(ESSBulletAfterReflectedEffect InReflectEffect) {
}

void ASSBulletActor::PlayOT() {
}

























bool ASSBulletActor::IsRun() const {
    return false;
}

float ASSBulletActor::GetTargetDistance3D(FVector& OutTargetLocation) {
    return 0.0f;
}

float ASSBulletActor::GetTargetDistance2D(FVector& OutTargetLocation) {
    return 0.0f;
}

USSBulletCurveSpeed* ASSBulletActor::GetSpeedCurve() const {
    return NULL;
}

FKoratEffectColorDataDetail ASSBulletActor::GetSourceColor() {
    return FKoratEffectColorDataDetail{};
}

void ASSBulletActor::GetOwnerCharacterEnemyCharacterTransform(FTransform& OutTransform, EKoratBranch& OutResult) {
}

void ASSBulletActor::GetOwnerCharacterCurrentAction(FKoratActionDataList& OutAction) const {
}

bool ASSBulletActor::GetIsImpossibleGuard() const {
    return false;
}

void ASSBulletActor::GetHomingTargetLocaton(FVector& OutLocation, EKoratBranch& OutResult) {
}

float ASSBulletActor::GetBulletSpeed() const {
    return 0.0f;
}

bool ASSBulletActor::GetBulletEnable() const {
    return false;
}

bool ASSBulletActor::GetBulletCollisionEnable() const {
    return false;
}

void ASSBulletActor::FinishLevelSequence(FName InName) {
}

void ASSBulletActor::ExecuteTimeTable(UObject* WorldContextObject, const FLatentActionInfo InLatentInfo, const TArray<float> InTimeTable, EKoratLoop& OutResult, TArray<int32>& OutIndices) {
}

void ASSBulletActor::EraseLevelSequence(FName InName) {
}

void ASSBulletActor::EnableApproach3DEvent(float InDistance) {
}

void ASSBulletActor::EnableApproach2DEvent(float InDistance) {
}

void ASSBulletActor::DeleteCollision() {
}

void ASSBulletActor::DebugDrawCollision2(const FVector& InLocation, float InScale, float InHeightScale, const FColor& InColor) {
}

void ASSBulletActor::DebugDrawCollision(UPrimitiveComponent* InCollision, const FColor& InColor) {
}


bool ASSBulletActor::ClashCombatives(AActor* InActor, ASSCharacter* InCharacter, const FKoratActionDataList& InAction, const FKoratCombativesKeyDataList& InCombativesKey) {
    return false;
}

void ASSBulletActor::ChangeWaitForReflected(ASSCharacter* InReflectCharacter) {
}

void ASSBulletActor::ChangeWaitForDestroyWithChildren() {
}

void ASSBulletActor::ChangeWaitForDestroy() {
}

void ASSBulletActor::ChangeUnReflect(ESSBulletAfterReflectedEffect InReflectEffect) {
}

void ASSBulletActor::ChangeTrace(AActor* InTraceTarget, FKoratCharacterBoneDataList InTargetBone) {
}

void ASSBulletActor::ChangeStop() {
}

void ASSBulletActor::ChangeReflected(ESSBulletAfterReflectedEffect InReflectEffect, ASSCharacter* InReflectCharacter, FName InReflectCharacterBone, FKoratEnergyBulletDirectionDataList InDirectionData, AActor* InTargetActor, FKoratCharacterBoneDataList InTargetBone, bool bInHoming) {
}

void ASSBulletActor::ChangeReflect() {
}

void ASSBulletActor::ChangeMultiHitStartGeometry(TArray<AActor*>& HitObjects) {
}

void ASSBulletActor::ChangeMultiHitStartCharacter(ASSCharacter* HitCharacter) {
}

void ASSBulletActor::ChangeMultiHitGeometry() {
}

void ASSBulletActor::ChangeMultiHitCharacter(ASSCharacter* HitCharacter) {
}

void ASSBulletActor::ChangeMoveByController(AActor* InController) {
}

void ASSBulletActor::ChangeMoveBulletUnHoming() {
}

void ASSBulletActor::ChangeMoveBulletNoHomingUpdate() {
}

void ASSBulletActor::ChangeMoveBullet(AActor* InTargetActor, FKoratCharacterBoneDataList TargetBone) {
}

void ASSBulletActor::ChangeLifeSpanEnd() {
}

void ASSBulletActor::ChangeLastHitGeometry(TArray<AActor*>& HitObjects, ESSBulletGeometryLastHitType LastHitType, ESSBulletActorStatus StatusBeforeHit) {
}

void ASSBulletActor::ChangeLastHitCharacter(ASSCharacter* HitCharacter, ESSBulletCharacterLastHitType LastHitType, ESSBulletActorStatus StatusBeforeHit) {
}

void ASSBulletActor::ChangeDoNothing() {
}

void ASSBulletActor::ChangeClash(AActor* HitActor) {
}

void ASSBulletActor::ChangeCharge(ESSBulletActorStatus InStatusAfterCharge) {
}

void ASSBulletActor::ChangeCaptured() {
}

void ASSBulletActor::ChangeBeamHitCharacter(ASSCharacter* HitCharacter) {
}


