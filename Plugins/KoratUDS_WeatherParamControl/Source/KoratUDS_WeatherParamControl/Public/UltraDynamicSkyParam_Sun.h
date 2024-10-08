#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UltraDynamicSkyParam_Sun.generated.h"

USTRUCT(BlueprintType)
struct FUltraDynamicSkyParam_Sun {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SunLightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SunLightColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SunDiskIntensity;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyParam_Sun();
};

