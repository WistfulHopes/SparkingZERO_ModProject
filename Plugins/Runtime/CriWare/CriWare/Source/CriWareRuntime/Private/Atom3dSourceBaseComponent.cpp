#include "Atom3dSourceBaseComponent.h"

UAtom3dSourceBaseComponent::UAtom3dSourceBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultOutputVolumeScale = 0.00f;
    this->DefaultRegion = NULL;
    this->bIsAttenuationDistanceDebugSpheresVisible = false;
    this->DefaultMinAttenuationDistance = 0.00f;
    this->DefaultMaxAttenuationDistance = 0.00f;
    this->bIsOutputInteriorPanFieldDebugSpheresVisible = false;
    this->DefaultSourceRadius = 0.00f;
    this->DefaultInteriorDistance = 0.00f;
    this->bIsDebugStringsForDetailsVisible = false;
}

void UAtom3dSourceBaseComponent::SetRegion(UAtom3dRegion* InRegion) {
}


