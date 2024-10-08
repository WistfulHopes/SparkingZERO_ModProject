#pragma once
#include "CoreMinimal.h"
#include "KoratMultiDeviceSettingDataBrightnessOptionSettings.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratMultiDeviceSettingDataBrightnessOptionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HDR_Brightness_MidLuminance_Low;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HDR_Brightness_MidLuminance_Standard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HDR_Brightness_MidLuminance_High;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HDR_Black_MinLuminanceLog10_Low;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HDR_Black_MinLuminanceLog10_Standard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HDR_Black_MinLuminanceLog10_High;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SDR_Brightness_DisplayGamma_Low;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SDR_Brightness_DisplayGamma_Standard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SDR_Brightness_DisplayGamma_High;
    
    FKoratMultiDeviceSettingDataBrightnessOptionSettings();
};

