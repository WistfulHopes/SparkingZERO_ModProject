#include "SSCharacterSocketComponent.h"

USSCharacterSocketComponent::USSCharacterSocketComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAimLocationSyncUnSafeEnable = false;
    this->bAimLookatLocationSyncUnSafeEnable = false;
    this->bSaveAimLocationEnable = false;
    this->bSaveAimLookatLocationEnable = false;
    this->bDrawDebug = false;
    this->DrawDebugLifetime = 0.00f;
    this->DrawDebugThickness = 5.00f;
}

bool USSCharacterSocketComponent::IsEnableAimLookatLocation() {
    return false;
}

bool USSCharacterSocketComponent::IsEnableAimLocation() {
    return false;
}

bool USSCharacterSocketComponent::GetSocketTransformSyncSafe(FTransform& OutTransform, const FName SocketName, const TEnumAsByte<ERelativeTransformSpace> TransformSpace) const {
    return false;
}

FName USSCharacterSocketComponent::GetComponentTagName() {
    return NAME_None;
}

FVector USSCharacterSocketComponent::GetAimLookatLocation() {
    return FVector{};
}

FVector USSCharacterSocketComponent::GetAimLocation() {
    return FVector{};
}


