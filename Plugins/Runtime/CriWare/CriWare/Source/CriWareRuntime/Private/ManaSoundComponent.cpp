#include "ManaSoundComponent.h"

UManaSoundComponent::UManaSoundComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bUseAttachParentBound = true;
    this->bAutoDestroy = false;
    this->bStopWhenOwnerDestroyed = true;
    this->bEnableSpatialization = true;
    this->bOverrideVolumeMultiplier = false;
    this->bEnableLowPassFilter = false;
    this->VolumeMultiplier = 1.00f;
    this->LowPassFilterFrequency = 24000.00f;
    this->PanSpread = 1.00f;
    this->MinAttenuationDistance = 400.00f;
    this->MaxAttenuationDistance = 4000.00f;
    this->ManaPlayer = NULL;
}

void UManaSoundComponent::SetManaPlayer(UManaPlayer* NewManaPlayer) {
}

void UManaSoundComponent::SetAudioTrackCategory(EManaPlayerTrack Track, const FString& CategoryName) {
}

void UManaSoundComponent::RemoveAudioTrackCategory(EManaPlayerTrack Track) {
}

UManaPlayer* UManaSoundComponent::GetManaPlayer() const {
    return NULL;
}


