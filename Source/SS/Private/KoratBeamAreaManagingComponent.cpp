#include "KoratBeamAreaManagingComponent.h"
#include "KoratAreaBoxComponent.h"

UKoratBeamAreaManagingComponent::UKoratBeamAreaManagingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaThickness = 100.00f;
    this->AreaComponentClass = UKoratAreaBoxComponent::StaticClass();
}


