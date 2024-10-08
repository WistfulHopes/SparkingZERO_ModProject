#include "AtomAudioVolume.h"
#include "Net/UnrealNetwork.h"

AAtomAudioVolume::AAtomAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->Priority = 0.00f;
    this->bEnabled = true;
    this->CollisionProfile = TEXT("NoCollision");
    this->bAutoSettingEntranceVolume = false;
    this->bAutoSettingNeighbourAudioVolumeToEntranceVolume = false;
    this->bOverrideAtomAudioVolume = true;
    this->AtomAudioVolumeSettings = NULL;
}

void AAtomAudioVolume::SetReverbSettings(const FSnapshotSwitchSettings& NewReverbSettings) {
}

void AAtomAudioVolume::SetPriority(float NewPriority) {
}

void AAtomAudioVolume::SetEnabled(bool bNewEnabled) {
}

void AAtomAudioVolume::OnRep_bEnabled() {
}

float AAtomAudioVolume::GetPriority() const {
    return 0.0f;
}

bool AAtomAudioVolume::GetEnabled() const {
    return false;
}

void AAtomAudioVolume::EnableAllAudioVolume(bool bEnable) {
}

void AAtomAudioVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAtomAudioVolume, bEnabled);
}


