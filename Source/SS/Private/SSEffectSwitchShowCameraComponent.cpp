#include "SSEffectSwitchShowCameraComponent.h"

USSEffectSwitchShowCameraComponent::USSEffectSwitchShowCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraSlot = ECameraGlobalSlot::MAIN_SLOT;
    this->ShowFromCameraMode = EShowFromCameraMode::FirstPerson;
    this->bBugFixFlag = false;
}

void USSEffectSwitchShowCameraComponent::SetShowFromCameraMode(EShowFromCameraMode InCameraMode) {
}

void USSEffectSwitchShowCameraComponent::SetCameraSlot(ECameraGlobalSlot InCameraSlot) {
}


