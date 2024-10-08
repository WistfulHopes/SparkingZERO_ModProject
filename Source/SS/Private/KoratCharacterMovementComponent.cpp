#include "KoratCharacterMovementComponent.h"

UKoratCharacterMovementComponent::UKoratCharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TurnAngularVelocity = 720.00f;
    this->HomingAngleRange = 180.00f;
    this->bNoHomingUpwards = false;
    this->BodyYawFollowAngularVelocity = 720.00f;
    this->MaxMovementActSpeed = 5000.00f;
    this->MaxMovementActAcceleration = 20000.00f;
    this->MaxMovementActDeceleration = 20000.00f;
    this->BrakingDecelerationMovementActing = 40000.00f;
    this->BrakingDecelerationMovementActingCrash = 0.00f;
    this->TurnAngle = 0.00f;
    this->BodyPitchAngle = 0.00f;
    this->bEnableLocomotionSetLocation = false;
    this->bEnableLocomotionSetRotator = false;
    this->TargetActor = NULL;
    this->bRotateTowardTargetByBodyYaw = false;
    this->bRotateTowardTargetByBodyPitch = false;
    this->MovementAct = EUKoratCharacterMovementAct::Idle;
    this->MovementActRemainTime = 0.00f;
    this->bEnablePushingCollision = true;
    this->bExecFluffy = true;
    this->FluffyStart = 0.00f;
    this->FluffyEnd = 0.00f;
    this->FluffyTime = 0.00f;
    this->FluffyCurrentValue = 0.00f;
    this->KnockbackVelocityCurve = NULL;
    this->KnockbackLocationCurve = NULL;
}

void UKoratCharacterMovementComponent::UpdateMovementFloor() {
}

void UKoratCharacterMovementComponent::Turn(float InTurnAngle) {
}

void UKoratCharacterMovementComponent::StopTurning() {
}

void UKoratCharacterMovementComponent::SnapTransformForNextTick() {
}

void UKoratCharacterMovementComponent::SnapRotateByBodyYawForNextTick() {
}

void UKoratCharacterMovementComponent::SnapRotateByBodyPitchForNextTick() {
}

void UKoratCharacterMovementComponent::SetPushingCollisionStep() {
}

void UKoratCharacterMovementComponent::SetPushingCollisionEnable(bool bEnable) {
}

void UKoratCharacterMovementComponent::SetMovementWalkableFloor(bool IsWalkableFloor) {
}

void UKoratCharacterMovementComponent::SafeMoveAndSlideAlongSurface(FVector MoveVelocity, FRotator MoveRotation) {
}

void UKoratCharacterMovementComponent::KnockbackMovementVector(FVector WorldDirection, float InAlpha, float ScaleValue) {
}

float UKoratCharacterMovementComponent::KnockbackMovementStart(FVector WorldDirection, float InHitbackTime, float InInitialSpeed, float InMaxSpeed, float InMaxAcceleration, float InBrakingDeceleration) {
    return 0.0f;
}

void UKoratCharacterMovementComponent::KnockbackMovementApply(FVector WorldDirection, float InDeltaTime, float InKnockbackTime) {
}

bool UKoratCharacterMovementComponent::IsTurning() const {
    return false;
}

bool UKoratCharacterMovementComponent::IsFlyingWithFluffy() {
    return false;
}

bool UKoratCharacterMovementComponent::IsFluffyNow() {
    return false;
}

bool UKoratCharacterMovementComponent::IsCanFly() const {
    return false;
}

bool UKoratCharacterMovementComponent::GetSocketTransformSyncSafe(FTransform& OutTransform, const FName SocketName, const TEnumAsByte<ERelativeTransformSpace> TransformSpace) const {
    return false;
}

bool UKoratCharacterMovementComponent::GetPushingCollisionEnable() const {
    return false;
}

bool UKoratCharacterMovementComponent::GetMovementFloorNormal(FVector& OutNormalVector) const {
    return false;
}

bool UKoratCharacterMovementComponent::GetMovementFloorDistance(float& OutFloorDistance) const {
    return false;
}

bool UKoratCharacterMovementComponent::GetBodyYawEnabled() {
    return false;
}

bool UKoratCharacterMovementComponent::GetBodyPitchEnabled() {
    return false;
}

float UKoratCharacterMovementComponent::GetBodyPitchAngle() const {
    return 0.0f;
}

float UKoratCharacterMovementComponent::EstimateTurningDuration() const {
    return 0.0f;
}

FVector UKoratCharacterMovementComponent::CalculatMovementFloorTransformVector(const FVector& InVector) const {
    return FVector{};
}

void UKoratCharacterMovementComponent::ActuateBodyPitch() {
}


