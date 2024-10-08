#pragma once
#include "CoreMinimal.h"
#include "UltraDynamicSkyParam_BasicControls_Curve.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FUltraDynamicSkyParam_BasicControls_Curve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CloudCoverage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* OverallIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Saturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Contrast;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyParam_BasicControls_Curve();
};

