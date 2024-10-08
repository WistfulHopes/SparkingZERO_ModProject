#pragma once
#include "CoreMinimal.h"
#include "UltraDynamicSkyParam_Map000_Sky.generated.h"

USTRUCT(BlueprintType)
struct FUltraDynamicSkyParam_Map000_Sky {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Map000_Sky_Ratio;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyParam_Map000_Sky();
};

