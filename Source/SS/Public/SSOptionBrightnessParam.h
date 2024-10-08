#pragma once
#include "CoreMinimal.h"
#include "SSOptionBrightnessParam.generated.h"

USTRUCT(BlueprintType)
struct FSSOptionBrightnessParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHDR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HDR_Brightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HDR_Black;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HDR_Contrast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SDR_Brightness;
    
    SS_API FSSOptionBrightnessParam();
};

