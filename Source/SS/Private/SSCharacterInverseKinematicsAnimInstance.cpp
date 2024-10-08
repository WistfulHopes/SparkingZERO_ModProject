#include "SSCharacterInverseKinematicsAnimInstance.h"

USSCharacterInverseKinematicsAnimInstance::USSCharacterInverseKinematicsAnimInstance() {
    this->DisableFootIkCurve = TEXT("disable_foot_ik");
    this->FootIK_LeftFootSocket = TEXT("socket_IK_Retarget_Toe1_L");
    this->FootIK_RightFootSocket = TEXT("socket_IK_Retarget_Toe1_R");
    this->ThrowA2B = 0.00f;
}

void USSCharacterInverseKinematicsAnimInstance::ThrowHandRight(const EKoratInverseKinematicsType ThrowType, const FSSInverseKinematicsParameter& HandParams) {
}

void USSCharacterInverseKinematicsAnimInstance::ThrowHandLeft(const EKoratInverseKinematicsType ThrowType, const FSSInverseKinematicsParameter& HandParams) {
}

void USSCharacterInverseKinematicsAnimInstance::SetThrowAlpha(float A2BAlpha) {
}

bool USSCharacterInverseKinematicsAnimInstance::IsMovementGround() const {
    return false;
}

bool USSCharacterInverseKinematicsAnimInstance::IsEnabledFootIK() const {
    return false;
}



float USSCharacterInverseKinematicsAnimInstance::GetRightFootAlphaFromStorage() const {
    return 0.0f;
}

float USSCharacterInverseKinematicsAnimInstance::GetPowerImpactWaistMovement() const {
    return 0.0f;
}

FVector USSCharacterInverseKinematicsAnimInstance::GetPowerImpactRightHandLocation() const {
    return FVector{};
}

FVector USSCharacterInverseKinematicsAnimInstance::GetPowerImpactLeftHandLocation() const {
    return FVector{};
}


float USSCharacterInverseKinematicsAnimInstance::GetLeftFootAlphaFromStorage() const {
    return 0.0f;
}

FVector2D USSCharacterInverseKinematicsAnimInstance::GetFootTraceLine() const {
    return FVector2D{};
}

int32 USSCharacterInverseKinematicsAnimInstance::GetEnablePowerImpactHandIKMode() const {
    return 0;
}

FVector USSCharacterInverseKinematicsAnimInstance::GetCorrectWaistOffsetFromStorage() const {
    return FVector{};
}

void USSCharacterInverseKinematicsAnimInstance::EndThrow(const EKoratInverseKinematicsType ThrowType) {
}

void USSCharacterInverseKinematicsAnimInstance::DebugDraw_Implementation(float InDeltaT) const {
}

void USSCharacterInverseKinematicsAnimInstance::BeginThrow(const EKoratInverseKinematicsType ThrowType) {
}


