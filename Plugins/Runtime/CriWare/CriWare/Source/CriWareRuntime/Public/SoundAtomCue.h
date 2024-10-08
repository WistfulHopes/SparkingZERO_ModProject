#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtomAisacControlWithVelocityParam.h"
#include "AtomCueInfo.h"
#include "EAtomLoopSetting.h"
#include "SoundAtomCue.generated.h"

class UAtom3dRegion;
class USoundAtomCueSheet;
class USoundAttenuation;

UCLASS(Blueprintable, EditInlineNew)
class CRIWARERUNTIME_API USoundAtomCue : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheet;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CueName;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtomLoopSetting LoopSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyAtomParameter;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstWaveDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAudioVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMovable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanStraddleAudioVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDistanceToEnableAudioVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistanceToEnableAudioVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAreaSoundVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpdateRateForFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtom3dRegion* Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableChangingAisacValueWithComponentVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtomAisacControlWithVelocityParam> AisacControlSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEconomicTick;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideEconomicTickSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EconomicTickDistanceMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EconomicTickFrequency;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDistanceCulling;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCullSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullDistanceMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EconomicTickMarginDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopSettingByAtomCraft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCullingSoundPlayingProcessByDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLegacyCullingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxProcessDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideCullingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CullingMarginDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* DefaultAttenuation;
    
    USoundAtomCue();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Validate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLooping() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEconomicTickEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMaxAttenuationDistanceToUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxAttenuationDistanceToApply() const;
    
    UFUNCTION(BlueprintCallable)
    float GetEconomicTickMarginDistanceToUse() const;
    
    UFUNCTION(BlueprintCallable)
    float GetEconomicTickFrequencyToUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEconomicTickFrequencyToApply() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEconomicTickDistanceMarginToApply() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEconomicTickDistance() const;
    
    UFUNCTION(BlueprintCallable)
    float GetEconomicTickBoundaryDistanceToUse() const;
    
    UFUNCTION(BlueprintCallable)
    float GetCullingMarginDistanceToUse() const;
    
    UFUNCTION(BlueprintCallable)
    float GetCullingBoundaryDistanceToUse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCullDistanceMarginToApply() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCullDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_GetCueInfo(UPARAM(Ref) FAtomCueInfo& CueInfo) const;
    
};

