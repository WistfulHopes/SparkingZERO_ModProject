#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AtomAudioVolumeParameters.h"
#include "SnapshotSwitchSettings.h"
#include "AtomAudioVolume.generated.h"

class AAtomEntranceVolume;
class UAtomAudioVolumeSettings;

UCLASS(Blueprintable)
class CRIWARERUNTIME_API AAtomAudioVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bEnabled, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSettingEntranceVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSettingNeighbourAudioVolumeToEntranceVolume;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AudioVolumeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAtomAudioVolume;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtomAudioVolumeSettings* AtomAudioVolumeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtomAudioVolumeParameters AtomAudioVolumeSettingsOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAtomEntranceVolume*> EntranceVolumes;
    
    AAtomAudioVolume(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetReverbSettings(const FSnapshotSwitchSettings& NewReverbSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetPriority(float NewPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bNewEnabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_bEnabled();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    static void EnableAllAudioVolume(bool bEnable);
    
};

