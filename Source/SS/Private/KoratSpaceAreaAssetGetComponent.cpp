#include "KoratSpaceAreaAssetGetComponent.h"

UKoratSpaceAreaAssetGetComponent::UKoratSpaceAreaAssetGetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InstanceData = NULL;
    this->SpaceAreaGetter = NULL;
    this->TriggerGetter = NULL;
}


