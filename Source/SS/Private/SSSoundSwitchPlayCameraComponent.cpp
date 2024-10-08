#include "SSSoundSwitchPlayCameraComponent.h"

USSSoundSwitchPlayCameraComponent::USSSoundSwitchPlayCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlaySoundFromCameraMode = EPlaySoundFromCameraMode::FirstPerson;
}

void USSSoundSwitchPlayCameraComponent::SetPlaySoundFromCameraMode(EPlaySoundFromCameraMode InCameraMode) {
}


