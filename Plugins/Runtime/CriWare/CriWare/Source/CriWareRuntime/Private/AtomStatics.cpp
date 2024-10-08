#include "AtomStatics.h"

UAtomStatics::UAtomStatics() {
}

void UAtomStatics::UpdateDistanceFactorForAllSounds(float ArgDistanceFactor) {
}

void UAtomStatics::StopAllSoundsForKeyFromAtomComponentIds(UObject* AtomPlayGateRef, UObject* SkeltalMeshComponentRef) {
}

void UAtomStatics::StopAllSounds() {
}

UAtomComponent* UAtomStatics::SpawnSoundAttached(USoundAtomCue* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy) {
    return NULL;
}

UAtomComponent* UAtomStatics::SpawnSoundAtLocation(const UObject* WorldContextObject, USoundAtomCue* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy) {
    return NULL;
}

UAtomComponent* UAtomStatics::SpawnSound2D(const UObject* WorldContextObject, USoundAtomCue* Sound, float PitchMultiplier, float StartTime, bool bPersistAcrossLevelTransition, bool bAutoDestroy) {
    return NULL;
}

UAtomComponent* UAtomStatics::SpawnAtomSoundAttachedByName(USoundAtomCueSheet* CueSheet, const FString& CueName, USceneComponent* AttachToComponent, const FAtomComponentParams& Params, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoDestroy) {
    return NULL;
}

UAtomComponent* UAtomStatics::SpawnAtomSoundAttached(USoundAtomCue* Sound, USceneComponent* AttachToComponent, const FAtomComponentParams& Params, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoDestroy) {
    return NULL;
}

UAtomComponent* UAtomStatics::SpawnAtomSoundAtLocationByName(const UObject* WorldContextObject, USoundAtomCueSheet* CueSheet, const FString& CueName, FVector Location, const FAtomComponentParams& Params, bool bAutoDestroy) {
    return NULL;
}

UAtomComponent* UAtomStatics::SpawnAtomSoundAtLocation(const UObject* WorldContextObject, USoundAtomCue* Sound, FVector Location, const FAtomComponentParams& Params, bool bAutoDestroy) {
    return NULL;
}

UAtomComponent* UAtomStatics::SpawnAtomSound2DByName(const UObject* WorldContextObject, USoundAtomCueSheet* CueSheet, const FString& CueName, const FAtomComponentParams& Params, bool bPersistAcrossLevelTransition, bool bAutoDestroy) {
    return NULL;
}

UAtomComponent* UAtomStatics::SpawnAtomSound2D(const UObject* WorldContextObject, USoundAtomCue* Sound, const FAtomComponentParams& Params, bool bPersistAcrossLevelTransition, bool bAutoDestroy) {
    return NULL;
}

void UAtomStatics::SetListenerRegion(UAtom3dRegion* Region, const int32 PlayerIndex) {
}

void UAtomStatics::SetListenerFocusPointTargetComponent(USceneComponent* TargetComponent, const int32 PlayerIndex) {
}

void UAtomStatics::SetListenerFocusPointTargetActor(AActor* TargetActor, const int32 PlayerIndex) {
}

void UAtomStatics::SetListenerFocusPointInfo(const FAtomListenerFocusPointInfo FocusPointInfo, const int32 PlayerIndex) {
}

void UAtomStatics::SetListenerFocusPointDistanceLevel(const float DistanceLevel, const int32 PlayerIndex) {
}

void UAtomStatics::SetListenerFocusPointDirectionLevel(const float DirectionLevel, const int32 PlayerIndex) {
}

void UAtomStatics::SetAtomGameVariable(const FString& GameVariableName, float Value) {
}

UAtomComponent* UAtomStatics::PlaySoundForAnimNotify(USoundAtomCue* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bFollow) {
    return NULL;
}

UAtomComponent* UAtomStatics::PlaySoundAttached(USoundAtomCue* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings) {
    return NULL;
}

void UAtomStatics::PlaySoundAtLocation(UObject* WorldContextObject, USoundAtomCue* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings) {
}

UAtomComponent* UAtomStatics::PlayAtomSoundForAnimNotify(USoundAtomCue* Sound, const FAtomComponentParams& Params, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bFollow) {
    return NULL;
}

void UAtomStatics::PlayAtomSoundAtLocationByName(const UObject* WorldContextObject, USoundAtomCueSheet* CueSheet, const FString& CueName, FVector Location, const FAtomComponentParams& Params) {
}

void UAtomStatics::PlayAtomSoundAtLocation(const UObject* WorldContextObject, USoundAtomCue* Sound, FVector Location, const FAtomComponentParams& Params) {
}

void UAtomStatics::PauseAudioOutput(bool bPause) {
}

bool UAtomStatics::LoadAtomConfig(USoundAtomConfig* AcfObject) {
    return false;
}

FVector UAtomStatics::GetListeningPoint(const int32 PlayerIndex) {
    return FVector{};
}

UAtom3dRegion* UAtomStatics::GetListenerRegion(const int32 PlayerIndex) {
    return NULL;
}

FAtomListenerFocusPointInfo UAtomStatics::GetListenerFocusPointInfo(const int32 PlayerIndex) {
    return FAtomListenerFocusPointInfo{};
}

AAtomAudioVolume* UAtomStatics::GetAudioVolumeAffectingListener(const int32 PlayerIndex, const EAtomAudioVolumeType TypeNum) {
    return NULL;
}

float UAtomStatics::GetAtomGameVariable(const FString& GameVariableName) {
    return 0.0f;
}

UAtomComponent* UAtomStatics::CreateRootedAtomComponent(const UObject* WorldContextObject, bool bAutoDestroy) {
    return NULL;
}

void UAtomStatics::AddToAtomComponentIds(UObject* AtomPlayGateRef, UObject* SkeltalMeshComponentRef, int32 AtomComponentID) {
}


