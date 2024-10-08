#pragma once
#include "CoreMinimal.h"
#include "KoratMultiDeviceSettingDataBrightnessOptionSettings.h"
#include "KoratMultiDeviceSettingDataGraphicsOptionSettings.h"
#include "MutualDataAsset.h"
#include "KoratMultiDeviceSettingDataAsset.generated.h"

class UMaterialParameterCollection;

UCLASS(Blueprintable, MinimalAPI)
class UKoratMultiDeviceSettingDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> ConsoleVariableBool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> ConsoleVariableInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> ConsoleVariableFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MasterDeviceSettingMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MasterUserSettingMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMultiDeviceSettingDataBrightnessOptionSettings BrightnessOptionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMultiDeviceSettingDataGraphicsOptionSettings> GraphicsOptionSettings_AntiAliasingQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMultiDeviceSettingDataGraphicsOptionSettings> GraphicsOptionSettings_ShadowQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMultiDeviceSettingDataGraphicsOptionSettings> GraphicsOptionSettings_TextureQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMultiDeviceSettingDataGraphicsOptionSettings> GraphicsOptionSettings_PostProcessingQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMultiDeviceSettingDataGraphicsOptionSettings> GraphicsOptionSettings_VisualEffectQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMultiDeviceSettingDataGraphicsOptionSettings> GraphicsOptionSettings_LodQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMultiDeviceSettingDataGraphicsOptionSettings> GraphicsOptionSettings_FoliageQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMultiDeviceSettingDataGraphicsOptionSettings> GraphicsOptionSettings_MotionBlurQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMultiDeviceSettingDataGraphicsOptionSettings> GraphicsOptionSettings_HandyCameraShakeQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMultiDeviceSettingDataGraphicsOptionSettings> GraphicsOptionSettings_ChaosQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMultiDeviceSettingDataGraphicsOptionSettings> GraphicsOptionSettings_VSyncQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratMultiDeviceSettingDataGraphicsOptionSettings> GraphicsOptionSettings_DOFQuality;
    
public:
    UKoratMultiDeviceSettingDataAsset();

};

