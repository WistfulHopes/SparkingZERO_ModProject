#include "SSBattleImpactCharacterProxy.h"

USSBattleImpactCharacterProxy::USSBattleImpactCharacterProxy() {
    this->OwnerProcedure = NULL;
    this->PlayerCharacter = NULL;
}

float USSBattleImpactCharacterProxy::TransitActionFromSection(FKoratActionDataList InAction, FName InJumpSectionName) {
    return 0.0f;
}

float USSBattleImpactCharacterProxy::TransitAction(FKoratActionDataList InAction) {
    return 0.0f;
}

float USSBattleImpactCharacterProxy::StartVanishingAction(const float InDisappearTime, const float InAppearTime, const FVector InAppearPosition, const FRotator InAppearDirection, const FKoratActionDataList InAppearAction) {
    return 0.0f;
}

void USSBattleImpactCharacterProxy::SetSupporterUnlockBlock(bool bBlock) {
}

void USSBattleImpactCharacterProxy::SetPowerImpactWaistMovement(float Value) {
}

void USSBattleImpactCharacterProxy::SetPowerImpactHandLocation(const FVector& Left, const FVector& Right) {
}

void USSBattleImpactCharacterProxy::SetPowerImpactHandIK(bool bEnableHandIK, bool bEnableHandIKRight) {
}

void USSBattleImpactCharacterProxy::SetHaveEndEvent(bool InHaveEndEvent) {
}

bool USSBattleImpactCharacterProxy::SetBulletTipLocation(const FVector& InLocation) {
    return false;
}

void USSBattleImpactCharacterProxy::SetBlastImpactCharacterSide(TEnumAsByte<ESSBlaseImpactCharacterSide> InSide) {
}

void USSBattleImpactCharacterProxy::SetBlastImpactBlastTypeByType(EKoratBlastSlotType Type) {
}

void USSBattleImpactCharacterProxy::SetActionCamera(const ESSSetActionCameraType InSetType, USSActionCameraDataAsset* InActionCamera) {
}

void USSBattleImpactCharacterProxy::ResetBulletTransform(const FTransform& InTransform) {
}

void USSBattleImpactCharacterProxy::RequestChangeBulletStatus(const TEnumAsByte<ESSBattleImpactBlastBulletStatus> InStatus, const float InDominance) {
}

bool USSBattleImpactCharacterProxy::MoveCharacterTransform(FTransform NewTransform, float TravelTime) {
    return false;
}

bool USSBattleImpactCharacterProxy::MoveCharacterLocation(FVector NewLocation, float TravelTime) {
    return false;
}

bool USSBattleImpactCharacterProxy::MontageJumpSection(const FKoratReplaceAnimationDataList InAnimation, const FName InSectionName) {
    return false;
}

bool USSBattleImpactCharacterProxy::IsWinner() const {
    return false;
}

bool USSBattleImpactCharacterProxy::IsMovementGround() {
    return false;
}

bool USSBattleImpactCharacterProxy::IsMontagePlayingBySelf(FName& OutSection) {
    return false;
}

bool USSBattleImpactCharacterProxy::IsLoser() const {
    return false;
}

bool USSBattleImpactCharacterProxy::IsHaveEndEvent() const {
    return false;
}

bool USSBattleImpactCharacterProxy::IsBlastImpactBulletShift() const {
    return false;
}

float USSBattleImpactCharacterProxy::IsBlastImpactBulletScale() const {
    return 0.0f;
}

USSBattleImpactCharacterProxy* USSBattleImpactCharacterProxy::GetTargetCharacterProxy() const {
    return NULL;
}

ASSCharacter* USSBattleImpactCharacterProxy::GetPtr() const {
    return NULL;
}

int32 USSBattleImpactCharacterProxy::GetPlayerIndex() const {
    return 0;
}

ASSCharacter* USSBattleImpactCharacterProxy::GetPlayerCharacter() {
    return NULL;
}

float USSBattleImpactCharacterProxy::GetMontageRemainingTimeAtSection(FName& OutSection) {
    return 0.0f;
}

UKoratCharacterTransitionFlowComponent* USSBattleImpactCharacterProxy::GetCharacterTransitionFlowComponent() {
    return NULL;
}

FTransform USSBattleImpactCharacterProxy::GetCharacterTransform() const {
    return FTransform{};
}

FTransform USSBattleImpactCharacterProxy::GetCharacterSocketTransform(const FName InSocketName, const TEnumAsByte<ERelativeTransformSpace> InTransformSpace) const {
    return FTransform{};
}

USkeletalMeshComponent* USSBattleImpactCharacterProxy::GetCharacterMesh() const {
    return NULL;
}

FTransform USSBattleImpactCharacterProxy::GetBulletFiredTransform() const {
    return FTransform{};
}

FTransform USSBattleImpactCharacterProxy::GetBulletActorTransform() const {
    return FTransform{};
}

float USSBattleImpactCharacterProxy::GetBulleCollisionSize() {
    return 0.0f;
}

float USSBattleImpactCharacterProxy::GetBlastImpactBulletShiftSize() const {
    return 0.0f;
}

float USSBattleImpactCharacterProxy::GetBlastImpactBulletShiftRate() const {
    return 0.0f;
}

ASSBulletActor* USSBattleImpactCharacterProxy::GetBlastImpactBulletActor(EKoratBranch& OutResult) {
    return NULL;
}

EKoratBlastSlotType USSBattleImpactCharacterProxy::GetBlastImpactBlastType() const {
    return EKoratBlastSlotType::None;
}

FTransform USSBattleImpactCharacterProxy::GetBackupTransform() const {
    return FTransform{};
}

FKoratActionDataList USSBattleImpactCharacterProxy::GetBackupActionData() const {
    return FKoratActionDataList{};
}

EKoratActionAttackType USSBattleImpactCharacterProxy::GetAttackType() const {
    return EKoratActionAttackType::None;
}

void USSBattleImpactCharacterProxy::EnableCharacterCollision() {
}

void USSBattleImpactCharacterProxy::DisableCharacterCollision() {
}

void USSBattleImpactCharacterProxy::DebugDrawSocketBox(const FName SocketName, const FVector Offset, const FVector Extent, const FLinearColor Color) {
}

bool USSBattleImpactCharacterProxy::CompareBackupActionData(const FKoratActionDataList InActionData) const {
    return false;
}

FTransform USSBattleImpactCharacterProxy::CalcTransformTarget(const FVector InTargetLocation, FRotator InTargetRotation, const FName SocketName, bool bIgnorePitchRotation) const {
    return FTransform{};
}

FRotator USSBattleImpactCharacterProxy::CalcRotatorTarget(FVector RotateTarget, bool bIgnorePitchRotation, FRotator AdditionalRotation) const {
    return FRotator{};
}

FVector USSBattleImpactCharacterProxy::CalcLocationTarget(FVector InTargetLocation, FName InSocketName) const {
    return FVector{};
}

FRotator USSBattleImpactCharacterProxy::CalcConfrontRotator(float AdditionalAngle) const {
    return FRotator{};
}

void USSBattleImpactCharacterProxy::BackupActionData() {
}


