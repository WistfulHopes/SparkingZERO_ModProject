#pragma once
#include "CoreMinimal.h"
#include "UltraDynamicSkyParam_BasicControls.generated.h"

USTRUCT(BlueprintType)
struct FUltraDynamicSkyParam_BasicControls {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudCoverage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double OverallIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Saturation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Contrast;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyParam_BasicControls();
};

