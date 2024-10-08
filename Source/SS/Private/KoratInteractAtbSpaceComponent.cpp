#include "KoratInteractAtbSpaceComponent.h"

UKoratInteractAtbSpaceComponent::UKoratInteractAtbSpaceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitNearObjectUniqueID = -1;
}

bool UKoratInteractAtbSpaceComponent::IsOneShot_Implementation() {
    return false;
}

void UKoratInteractAtbSpaceComponent::CheckHitInformation_Implementation(UKoratInteractHitInformationBase* InParam) {
}

bool UKoratInteractAtbSpaceComponent::CanPlay_Implementation() {
    return false;
}


