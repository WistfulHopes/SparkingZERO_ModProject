#pragma once
#include "CoreMinimal.h"
#include "KoratMultiDeviceSettingDataPostProcessOfHDR.generated.h"

USTRUCT(BlueprintType)
struct FKoratMultiDeviceSettingDataPostProcessOfHDR {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_BlueCorrection: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_ExpandGamut: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_ToneCurveAmount: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlueCorrection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float ExpandGamut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float ToneCurveAmount;
    
    SS_API FKoratMultiDeviceSettingDataPostProcessOfHDR();
};

