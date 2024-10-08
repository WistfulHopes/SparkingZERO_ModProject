#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UltraDynamicSkyParam_LightShafts.generated.h"

USTRUCT(BlueprintType)
struct FUltraDynamicSkyParam_LightShafts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSunLightShaftBloom;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SunLightShaftMaxBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SunLightShaftTintColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMoonLightShaftBloom;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MoonLightShaftMaxBrightness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MoonLightShaftBloomThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MoonLightShaftBloomScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MoonLightShaftTintColor;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyParam_LightShafts();
};

