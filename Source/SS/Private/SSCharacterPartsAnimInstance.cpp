#include "SSCharacterPartsAnimInstance.h"

USSCharacterPartsAnimInstance::USSCharacterPartsAnimInstance() {
    this->OwnerCharacter = NULL;
    this->BlendAlpha = 0.00f;
    this->AnimMontages[0] = NULL;
    this->AnimMontages[1] = NULL;
    this->AnimMontages[2] = NULL;
    this->AnimMontages[3] = NULL;
    this->AnimMontages[4] = NULL;
}

void USSCharacterPartsAnimInstance::SetBlendWeight_Implementation(float BlendWeight) {
}

USkeletalMeshComponent* USSCharacterPartsAnimInstance::GetOwningActorSkeletalMeshComponent() const {
    return NULL;
}

float USSCharacterPartsAnimInstance::GetCurveValueFromOwningActorSkeletalMeshComponent(const FName InCurveName) {
    return 0.0f;
}

USSAnimInstance* USSCharacterPartsAnimInstance::FindAnimInstance(const FName InTag) {
    return NULL;
}



