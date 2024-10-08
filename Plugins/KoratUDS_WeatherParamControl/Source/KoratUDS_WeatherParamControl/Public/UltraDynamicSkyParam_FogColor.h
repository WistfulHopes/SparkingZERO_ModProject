#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UltraDynamicSkyParam_FogColor.generated.h"

USTRUCT(BlueprintType)
struct FUltraDynamicSkyParam_FogColor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FogColorIntensityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FogInscatteringSun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FogInscatteringMoon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FogDirectionalInscattering;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FoggyDesaturation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double OvercastDesaturation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double OvercastBrightnessDay;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double OvercastBrightnessNight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AllFogColorsMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseVolumetricFog;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyParam_FogColor();
};

