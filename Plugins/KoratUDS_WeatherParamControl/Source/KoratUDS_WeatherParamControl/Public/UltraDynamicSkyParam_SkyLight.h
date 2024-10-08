#pragma once
#include "CoreMinimal.h"
#include "UltraDynamicSkyParam_SkyLight.generated.h"

USTRUCT(BlueprintType)
struct FUltraDynamicSkyParam_SkyLight {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SkyLightIntensity;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyParam_SkyLight();
};

