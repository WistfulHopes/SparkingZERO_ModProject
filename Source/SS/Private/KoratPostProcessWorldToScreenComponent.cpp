#include "KoratPostProcessWorldToScreenComponent.h"

UKoratPostProcessWorldToScreenComponent::UKoratPostProcessWorldToScreenComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerIndex = 0;
}

bool UKoratPostProcessWorldToScreenComponent::GetNormalizeScreenLocationWithDistance(FVector& OutScreenLocation) const {
    return false;
}


