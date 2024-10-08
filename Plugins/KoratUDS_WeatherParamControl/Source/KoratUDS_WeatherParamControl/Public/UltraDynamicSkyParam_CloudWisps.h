#pragma once
#include "CoreMinimal.h"
#include "UltraDynamicSkyParam_CloudWisps.generated.h"

USTRUCT(BlueprintType)
struct FUltraDynamicSkyParam_CloudWisps {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudWispsColorIntensity;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyParam_CloudWisps();
};

