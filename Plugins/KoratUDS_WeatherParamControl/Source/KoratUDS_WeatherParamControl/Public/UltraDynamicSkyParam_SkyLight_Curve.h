#pragma once
#include "CoreMinimal.h"
#include "UltraDynamicSkyParam_SkyLight_Curve.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FUltraDynamicSkyParam_SkyLight_Curve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SkyLightIntensity;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyParam_SkyLight_Curve();
};

