#include "SSCharacterSwitchVisibilityAnimInstance.h"

USSCharacterSwitchVisibilityAnimInstance::USSCharacterSwitchVisibilityAnimInstance() {
}

void USSCharacterSwitchVisibilityAnimInstance::ReceiveViewSwitchShadow_Implementation(USkeletalMeshComponent* Mesh, bool IsVisible) {
}

void USSCharacterSwitchVisibilityAnimInstance::ReceiveViewSwitchMesh_Implementation(USkeletalMeshComponent* Mesh, bool IsVisible) {
}

int32 USSCharacterSwitchVisibilityAnimInstance::GetVisibilityValueFromAsset(UKoratViewSwitchDataAsset* ViewSwitch) const {
    return 0;
}

int32 USSCharacterSwitchVisibilityAnimInstance::GetVisibilityValue_Implementation(const FName& Name) const {
    return 0;
}



