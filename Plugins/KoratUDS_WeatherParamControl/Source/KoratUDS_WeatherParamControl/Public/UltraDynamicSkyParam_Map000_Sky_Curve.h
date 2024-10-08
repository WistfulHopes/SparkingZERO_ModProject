#pragma once
#include "CoreMinimal.h"
#include "UltraDynamicSkyParam_Map000_Sky_Curve.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FUltraDynamicSkyParam_Map000_Sky_Curve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Map000_Sky_Ratio;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyParam_Map000_Sky_Curve();
};

