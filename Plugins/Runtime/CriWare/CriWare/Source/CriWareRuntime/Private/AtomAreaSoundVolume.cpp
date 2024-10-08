#include "AtomAreaSoundVolume.h"
#include "Net/UnrealNetwork.h"

AAtomAreaSoundVolume::AAtomAreaSoundVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Priority = 0.00f;
    this->bEnabled = true;
    this->CollisionProfile = TEXT("NoCollision");
    this->SoundStopDistance = 100000.00f;
    this->bIsEnableAtomCompoentPack = false;
    this->bIsAutoPlaySound = true;
    this->bIsDeterminationFromVolumeBoundaryPlane = false;
    this->bEnableRepeatPlayWhenSoundStop = false;
}

void AAtomAreaSoundVolume::SetPriority(float NewPriority) {
}

void AAtomAreaSoundVolume::SetEnabled(bool bNewEnabled) {
}

void AAtomAreaSoundVolume::OnRep_bEnabled() {
}

float AAtomAreaSoundVolume::GetPriority() const {
    return 0.0f;
}

bool AAtomAreaSoundVolume::GetEnabled() const {
    return false;
}

void AAtomAreaSoundVolume::DestroySounds() {
}

TArray<UAtomComponent*> AAtomAreaSoundVolume::CreateSounds(FVector listener_location) {
    return TArray<UAtomComponent*>();
}

void AAtomAreaSoundVolume::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAtomAreaSoundVolume, bEnabled);
}


