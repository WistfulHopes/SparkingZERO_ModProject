#include "AtomCueSheetLoaderComponent.h"

UAtomCueSheetLoaderComponent::UAtomCueSheetLoaderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->BinderComponent = NULL;
    this->CueSheet = NULL;
}

void UAtomCueSheetLoaderComponent::LoadAtomCueSheet(UObject* WorldContextObject, TSoftObjectPtr<USoundAtomCueSheet> Asset, UAtomCueSheetLoaderComponent::FOnAtomCueSheetLoaded OnLoaded, FLatentActionInfo LatentInfo) {
}

void UAtomCueSheetLoaderComponent::Load() {
}

EAtomCueSheetLoaderComponentStatus UAtomCueSheetLoaderComponent::GetStatus() {
    return EAtomCueSheetLoaderComponentStatus::Stop;
}

USoundAtomCueSheet* UAtomCueSheetLoaderComponent::GetAtomCueSheet() {
    return NULL;
}


