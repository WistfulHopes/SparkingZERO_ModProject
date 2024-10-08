#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "AtomComponentParams.h"
#include "AtomListenerFocusPointInfo.h"
#include "EAtomAudioVolumeType.h"
#include "AtomStatics.generated.h"

class AActor;
class AAtomAudioVolume;
class UAtom3dRegion;
class UAtomComponent;
class UObject;
class USceneComponent;
class USoundAtomConfig;
class USoundAtomCue;
class USoundAtomCueSheet;
class USoundAttenuation;
class USoundConcurrency;

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UAtomStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAtomStatics();

    UFUNCTION(BlueprintCallable)
    static void UpdateDistanceFactorForAllSounds(float ArgDistanceFactor);
    
    UFUNCTION(BlueprintCallable)
    static void StopAllSoundsForKeyFromAtomComponentIds(UObject* AtomPlayGateRef, UObject* SkeltalMeshComponentRef);
    
    UFUNCTION(BlueprintCallable)
    static void StopAllSounds();
    
    UFUNCTION(BlueprintCallable)
    static UAtomComponent* SpawnSoundAttached(USoundAtomCue* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAtomComponent* SpawnSoundAtLocation(const UObject* WorldContextObject, USoundAtomCue* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UAtomComponent* SpawnSound2D(const UObject* WorldContextObject, USoundAtomCue* Sound, float PitchMultiplier, float StartTime, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static UAtomComponent* SpawnAtomSoundAttachedByName(USoundAtomCueSheet* CueSheet, const FString& CueName, USceneComponent* AttachToComponent, const FAtomComponentParams& Params, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static UAtomComponent* SpawnAtomSoundAttached(USoundAtomCue* Sound, USceneComponent* AttachToComponent, const FAtomComponentParams& Params, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAtomComponent* SpawnAtomSoundAtLocationByName(const UObject* WorldContextObject, USoundAtomCueSheet* CueSheet, const FString& CueName, FVector Location, const FAtomComponentParams& Params, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UAtomComponent* SpawnAtomSoundAtLocation(const UObject* WorldContextObject, USoundAtomCue* Sound, FVector Location, const FAtomComponentParams& Params, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UAtomComponent* SpawnAtomSound2DByName(const UObject* WorldContextObject, USoundAtomCueSheet* CueSheet, const FString& CueName, const FAtomComponentParams& Params, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UAtomComponent* SpawnAtomSound2D(const UObject* WorldContextObject, USoundAtomCue* Sound, const FAtomComponentParams& Params, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static void SetListenerRegion(UAtom3dRegion* Region, const int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetListenerFocusPointTargetComponent(USceneComponent* TargetComponent, const int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetListenerFocusPointTargetActor(AActor* TargetActor, const int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetListenerFocusPointInfo(const FAtomListenerFocusPointInfo FocusPointInfo, const int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetListenerFocusPointDistanceLevel(const float DistanceLevel, const int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetListenerFocusPointDirectionLevel(const float DirectionLevel, const int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetAtomGameVariable(const FString& GameVariableName, float Value);
    
    UFUNCTION(BlueprintCallable)
    static UAtomComponent* PlaySoundForAnimNotify(USoundAtomCue* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bFollow);
    
    UFUNCTION(BlueprintCallable)
    static UAtomComponent* PlaySoundAttached(USoundAtomCue* Sound, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlaySoundAtLocation(UObject* WorldContextObject, USoundAtomCue* Sound, FVector Location, FRotator Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, USoundConcurrency* ConcurrencySettings);
    
    UFUNCTION(BlueprintCallable)
    static UAtomComponent* PlayAtomSoundForAnimNotify(USoundAtomCue* Sound, const FAtomComponentParams& Params, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, USoundAttenuation* AttenuationSettings, bool bFollow);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayAtomSoundAtLocationByName(const UObject* WorldContextObject, USoundAtomCueSheet* CueSheet, const FString& CueName, FVector Location, const FAtomComponentParams& Params);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayAtomSoundAtLocation(const UObject* WorldContextObject, USoundAtomCue* Sound, FVector Location, const FAtomComponentParams& Params);
    
    UFUNCTION(BlueprintCallable)
    static void PauseAudioOutput(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadAtomConfig(USoundAtomConfig* AcfObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetListeningPoint(const int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static UAtom3dRegion* GetListenerRegion(const int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAtomListenerFocusPointInfo GetListenerFocusPointInfo(const int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AAtomAudioVolume* GetAudioVolumeAffectingListener(const int32 PlayerIndex, const EAtomAudioVolumeType TypeNum);
    
    UFUNCTION(BlueprintCallable)
    static float GetAtomGameVariable(const FString& GameVariableName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UAtomComponent* CreateRootedAtomComponent(const UObject* WorldContextObject, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    static void AddToAtomComponentIds(UObject* AtomPlayGateRef, UObject* SkeltalMeshComponentRef, int32 AtomComponentID);
    
};

