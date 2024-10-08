#pragma once
#include "CoreMinimal.h"
#include "UltraDynamicSkyParam_CloudWisps_Curve.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FUltraDynamicSkyParam_CloudWisps_Curve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CloudWispsColorIntensity;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyParam_CloudWisps_Curve();
};

