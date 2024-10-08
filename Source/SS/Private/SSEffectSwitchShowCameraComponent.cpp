#include "SSEffectSwitchShowCameraComponent.h"

USSEffectSwitchShowCameraComponent::USSEffectSwitchShowCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraSlot = ECameraGlobalSlot::MAIN_SLOT;
    this->ShowFromCameraMode = EShowFromCameraMode::FirstPerson;
}

void USSEffectSwitchShowCameraComponent::SetShowFromCameraMode(EShowFromCameraMode InCameraMode) {
}

void USSEffectSwitchShowCameraComponent::SetCameraSlot(ECameraGlobalSlot InCameraSlot) {
}


