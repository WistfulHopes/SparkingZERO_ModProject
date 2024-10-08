#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "SSOptionBrightnessParam.h"
#include "SSOptionVideoParam.h"
#include "KoratMultiDeviceSetting.generated.h"

class UKoratMultiDeviceSettingDataAsset;
class UObject;

UCLASS(Blueprintable)
class UKoratMultiDeviceSetting : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UKoratMultiDeviceSetting();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetupConsoleVariable(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetGraphicsOption_VSyncQuality(UObject* WorldContextObject, int32 Level);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetGraphicsOption_VisualEffectQuality(UObject* WorldContextObject, int32 Level);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetGraphicsOption_TextureQuality(UObject* WorldContextObject, int32 Level);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetGraphicsOption_ShadowQuality(UObject* WorldContextObject, int32 Level);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetGraphicsOption_PostProcessingQuality(UObject* WorldContextObject, int32 Level);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetGraphicsOption_MotionBlurQuality(UObject* WorldContextObject, int32 Level);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetGraphicsOption_LodQuality(UObject* WorldContextObject, int32 Level);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetGraphicsOption_HandyCameraShakeQuality(UObject* WorldContextObject, int32 Level);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetGraphicsOption_FoliageQuality(UObject* WorldContextObject, int32 Level);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetGraphicsOption_DOFQuality(UObject* WorldContextObject, int32 Level);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetGraphicsOption_ChaosQuality(UObject* WorldContextObject, int32 Level);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetGraphicsOption_AntiAliasingQuality(UObject* WorldContextObject, int32 Level);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetGraphicsOption(UObject* WorldContextObject, const FSSOptionVideoParam& Param);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetBrightnessOption_SDR_Brightness(UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetBrightnessOption_HDR_Contrast(UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetBrightnessOption_HDR_Brightness(UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetBrightnessOption_HDR_Black(UObject* WorldContextObject, float Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetBrightnessOption_EnableHDR(UObject* WorldContextObject, bool Enable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetBrightnessOption(UObject* WorldContextObject, const FSSOptionBrightnessParam& Param);
    
protected:
    UFUNCTION(BlueprintCallable)
    UKoratMultiDeviceSettingDataAsset* GetSettingDataAsset();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetGraphicsOption_VSyncQuality();
    
    UFUNCTION(BlueprintCallable)
    int32 GetGraphicsOption_VisualEffectQuality();
    
    UFUNCTION(BlueprintCallable)
    int32 GetGraphicsOption_TextureQuality();
    
    UFUNCTION(BlueprintCallable)
    int32 GetGraphicsOption_ShadowQuality();
    
    UFUNCTION(BlueprintCallable)
    int32 GetGraphicsOption_PostProcessingQuality();
    
    UFUNCTION(BlueprintCallable)
    int32 GetGraphicsOption_MotionBlurQuality();
    
    UFUNCTION(BlueprintCallable)
    int32 GetGraphicsOption_LodQuality();
    
    UFUNCTION(BlueprintCallable)
    int32 GetGraphicsOption_HandyCameraShakeQuality();
    
    UFUNCTION(BlueprintCallable)
    int32 GetGraphicsOption_FoliageQuality();
    
    UFUNCTION(BlueprintCallable)
    int32 GetGraphicsOption_DOFQuality();
    
    UFUNCTION(BlueprintCallable)
    int32 GetGraphicsOption_ChaosQuality();
    
    UFUNCTION(BlueprintCallable)
    int32 GetGraphicsOption_AntiAliasingQuality();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetDeviceChangeList();
    
    UFUNCTION(BlueprintCallable)
    float GetBrightnessOption_SDR_Brightness();
    
    UFUNCTION(BlueprintCallable)
    float GetBrightnessOption_HDR_Contrast();
    
    UFUNCTION(BlueprintCallable)
    float GetBrightnessOption_HDR_Brightness();
    
    UFUNCTION(BlueprintCallable)
    float GetBrightnessOption_HDR_Black();
    
    UFUNCTION(BlueprintCallable)
    bool GetBrightnessOption_EnableHDR();
    
    UFUNCTION(BlueprintCallable)
    void DeviceChange(const FString& Name);
    
};

