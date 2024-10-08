#pragma once
#include "CoreMinimal.h"
#include "UltraDynamicSkyParam_2D_DynamicClouds.generated.h"

USTRUCT(BlueprintType)
struct FUltraDynamicSkyParam_2D_DynamicClouds {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SoftenCloudLayer1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SoftenCloudLayer2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SharpenOuterEdge;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudTilingLayer1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudTilingLayer2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SoftenHorizon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneCloudLayer;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudHeightLayer1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudHeightLayer2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double OvercastSwirlingTexture;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SunShaderIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DirectionalLightingIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SunHighlightRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudOpacity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double HorizonDensityMultiplier;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ZenithDensityMultiplier;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LatitudeGradientPosition;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LatitudeGradientWidth;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AroundSunDensityMultiplier;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AroundSunDensityExponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AroundMoonDensityMultiplier;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AroundMoonDensityExponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double OvercastSwirlContrastOrigin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double OvercastSwirlContrastScale;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyParam_2D_DynamicClouds();
};

