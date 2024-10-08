#pragma once
#include "CoreMinimal.h"
#include "UltraDynamicSkyParam_Dust_Curve.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FUltraDynamicSkyParam_Dust_Curve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DustAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DustColor;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyParam_Dust_Curve();
};

