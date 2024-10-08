#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "Sound/SoundAttenuation.h"
#include "AtomAisacControlParam.h"
#include "AtomAisacControlWithVelocityParam.h"
#include "AtomAppliedValueParam.h"
#include "AtomBeatSyncInfo.h"
#include "AtomCallback.h"
#include "AtomSelectorParam.h"
#include "AtomSequenceInfo.h"
#include "EAtomAudioVolumeType.h"
#include "EAtomComponentStatus.h"
#include "EAtomLoopSetting.h"
#include "AtomComponent.generated.h"

class AAtomAreaSoundVolume;
class AAtomAudioVolume;
class UAtom3dRegion;
class UAtomComponent;
class UAtomSoundObject;
class UGameViewportClient;
class USoundAtomCue;
class USoundAtomCueSheet;
class USoundAttenuation;
class UWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UAtomComponent : public USceneComponent, public IAtomCallback {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStatusChanged, EAtomComponentStatus, Status, UAtomComponent*, AtomComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnAudioVolumeChanged, EAtomAudioVolumeType, Type, AAtomAudioVolume*, AtomAudioVolume, bool, bIsCalledFromTick);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAudioFinished);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAtomSequenceCallbackDelegate, UAtomComponent*, AtomComponent, const FAtomSequenceInfo&, SequenceInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAtomBeatSyncCallbackDelegate, UAtomComponent*, AtomComponent, const FAtomBeatSyncInfo&, BeatSyncInfo);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtom3dRegion* Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoDestroy: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPersistAcrossLevelTransition: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStopWhenOwnerDestroyed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsUISound: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableMultipleSoundPlayback: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsePlaylist: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMovable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanStraddleAudioVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAudioVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAreaSoundVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtomSoundObject* SoundObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultBlockIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtomAisacControlParam> DefaultAisacControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtomSelectorParam> DefaultSelectorLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOverrideAisacControlSettingsWithVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtomAisacControlWithVelocityParam> OverrideAisacControlSettingsWithVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtomLoopSetting LoopSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOnly2DSound: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStatusChanged OnStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAudioVolumeChanged OnAudioVolumeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAudioFinished OnAudioFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* PlayWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameViewportClient* GameViewport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtomSoundObject* DefaultSoundObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideAttenuation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundAttenuationSettings AttenuationOverrides;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAtomSoundObject* AppliedSoundObject;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtomBeatSyncCallbackDelegate OnAtomBeatSyncCallback;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtomSequenceCallbackDelegate OnAtomSequenceCallback;
    
    UAtomComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopWithoutReleaseTime();
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundObject(UAtomSoundObject* InSoundObject);
    
    UFUNCTION(BlueprintCallable)
    void SetSound(USoundAtomCue* NewSound);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectorLabel(const FString& Selector, const FString& Label);
    
    UFUNCTION(BlueprintCallable)
    void SetRegion(UAtom3dRegion* InRegion);
    
    UFUNCTION(BlueprintCallable)
    void SetPreferredOutputPort(const FString& port_name);
    
    UFUNCTION(BlueprintCallable)
    void SetPitchMultiplier(float NewPitchMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetPitch(float Pitch);
    
    UFUNCTION(BlueprintCallable)
    void SetOutputPort(const FString& port_name);
    
    UFUNCTION(BlueprintCallable)
    void SetNextBlockIndex(int32 BlockIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetDefaultAttenuationEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevelOffsetByName(const FString& BusName, float LevelOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevelOffset(int32 BusId, float LevelOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevelByName(const FString& BusName, float Level);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevel(int32 BusId, float Level);
    
    UFUNCTION(BlueprintCallable)
    void SetAsrRackIdArray(TArray<int32> AsrRackIDs);
    
    UFUNCTION(BlueprintCallable)
    void SetAsrRackID(int32 asr_rack_id);
    
    UFUNCTION(BlueprintCallable)
    void SetAisacByName(const FString& ControlName, float ControlValue);
    
    UFUNCTION(BlueprintCallable)
    void RemovePreferredOutputPort(const FString& port_name);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOutputPort(const FString& port_name);
    
    UFUNCTION(BlueprintCallable)
    void Play(float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void Pause(bool bPause);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReducingTickFrequency() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoop() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasBeenEconomicTick() const;
    
    UFUNCTION(BlueprintCallable)
    float GetVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAtomComponentStatus GetStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSequencePosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumQueuedSounds() const;
    
    UFUNCTION(BlueprintPure)
    void GetNumPlayedSamples(int64& NumSamples, int32& SamplingRate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxAttenuationDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEconomicTickFrequency() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEconomicTickDistanceMargin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEconomicTickDistance() const;
    
    UFUNCTION(BlueprintCallable)
    static bool GetDefaultAttenuationEnable();
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentMaxAttenuationDistance() const;
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentEconomicTickMarginDistance() const;
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentEconomicTickFrequency() const;
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentEconomicTickBoundaryDistance() const;
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentCullingMarginDistance() const;
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentCullingBoundaryDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAtomAudioVolume* GetCurrentBelongingAudioVolume(EAtomAudioVolumeType Type, bool IsNeighbor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCullDistanceMargin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCullDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCueName() const;
    
    UFUNCTION(BlueprintCallable)
    TMap<FString, float> GetAudioVolumeValueMap(EAtomAudioVolumeType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAtomComponentID() const;
    
    UFUNCTION(BlueprintCallable)
    static UAtomComponent* GetAtomComponentFromID(int32 TargetID);
    
    UFUNCTION(BlueprintCallable)
    FAtomAppliedValueParam GetAtomAppliedValueParam();
    
    UFUNCTION(BlueprintCallable)
    void FadeOut(float FadeOutDuration);
    
    UFUNCTION(BlueprintCallable)
    void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void EnqueueSound(USoundAtomCue* NewSound);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyComponentByID(int32 TargetID);
    
    UFUNCTION(BlueprintCallable)
    void ClearSelectorLabels();
    
    UFUNCTION(BlueprintCallable)
    void ClearPreferredOutputPort();
    
    UFUNCTION(BlueprintCallable)
    void ClearOutputPort();
    
    UFUNCTION(BlueprintCallable)
    bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);
    
    UFUNCTION(BlueprintCallable)
    void AttachAreaSoundVolume(AAtomAreaSoundVolume* sound_shape_volume);
    
    UFUNCTION(BlueprintCallable)
    void AdjustAttenuation(const FSoundAttenuationSettings& InAttenuationSettings);
    

    // Fix for true pure virtual functions not being implemented
};

