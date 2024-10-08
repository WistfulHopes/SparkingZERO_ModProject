#include "SSSubImpactPhysicsAnimInstance.h"

USSSubImpactPhysicsAnimInstance::USSSubImpactPhysicsAnimInstance() {
    this->bEnableHandIK = false;
    this->FootRangeMin = 4.00f;
    this->FootRangeMax = 5.00f;
}

int32 USSSubImpactPhysicsAnimInstance::SearchNearlyHitResult(const TArray<FHitResult>& InHitResults, const TEnumAsByte<ECollisionChannel> InConnlitionChannel) {
    return 0;
}

bool USSSubImpactPhysicsAnimInstance::IsGroundMode_Implementation() const {
    return false;
}


ASSCharacter* USSSubImpactPhysicsAnimInstance::GetTargetCharacter() const {
    return NULL;
}

float USSSubImpactPhysicsAnimInstance::GetRightFootAlphaFromStorage() const {
    return 0.0f;
}

float USSSubImpactPhysicsAnimInstance::GetPowerImpactWaistMovement() const {
    return 0.0f;
}

float USSSubImpactPhysicsAnimInstance::GetLeftFootAlphaFromStorage() const {
    return 0.0f;
}

FVector USSSubImpactPhysicsAnimInstance::GetFootLocation_Implementation(const FName SocketName) {
    return FVector{};
}


FVector USSSubImpactPhysicsAnimInstance::GetCorrectWaistOffsetFromStorage() const {
    return FVector{};
}


FHitResult USSSubImpactPhysicsAnimInstance::FootTrace_Implementation(FVector Location, float Upper, float Under) {
    return FHitResult{};
}

void USSSubImpactPhysicsAnimInstance::DebugDraw_Implementation(float InDeltaT) const {
}

FKoratInverseKinematicsFootResult USSSubImpactPhysicsAnimInstance::CalcFootOffset(const FHitResult& HitResult, const FName BaseSocket, const FName AnkleSocket, const FName RetargetToeSocket, const FName EffectorSocket) {
    return FKoratInverseKinematicsFootResult{};
}


