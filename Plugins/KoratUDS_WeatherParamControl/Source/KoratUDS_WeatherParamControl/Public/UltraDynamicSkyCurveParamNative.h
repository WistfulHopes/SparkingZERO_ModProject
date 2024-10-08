#pragma once
#include "CoreMinimal.h"
#include "UltraDynamicSkyParam_2D_DynamicClouds_Curve.h"
#include "UltraDynamicSkyParam_BasicControls_Curve.h"
#include "UltraDynamicSkyParam_CloudVortex_Curve.h"
#include "UltraDynamicSkyParam_CloudWisps_Curve.h"
#include "UltraDynamicSkyParam_CustomCloudShadow_Curve.h"
#include "UltraDynamicSkyParam_CustomVolumetricCloudsParameter_Curve.h"
#include "UltraDynamicSkyParam_Dust_Curve.h"
#include "UltraDynamicSkyParam_FogColor_Curve.h"
#include "UltraDynamicSkyParam_FogDensity_Curve.h"
#include "UltraDynamicSkyParam_LightShafts_Curve.h"
#include "UltraDynamicSkyParam_Map000_Cloud_Curve.h"
#include "UltraDynamicSkyParam_Map000_Sky_Curve.h"
#include "UltraDynamicSkyParam_SimplifiedColor_Curve.h"
#include "UltraDynamicSkyParam_SkyLight_Curve.h"
#include "UltraDynamicSkyParam_Sun_Curve.h"
#include "UltraDynamicSkyParam_VolumetricClouds_Curve.h"
#include "UltraDynamicSkyCurveParamNative.generated.h"

USTRUCT(BlueprintType)
struct FUltraDynamicSkyCurveParamNative {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_BasicControls_Curve BasicControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_VolumetricClouds_Curve VolumetricCloudsParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_CustomVolumetricCloudsParameter_Curve CustomVolumetricCloudsParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_FogColor_Curve FogColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_FogDensity_Curve FogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_Dust_Curve Dust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_LightShafts_Curve LightShafts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_SkyLight_Curve SkyLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_Sun_Curve Sun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_2D_DynamicClouds_Curve X2DDynamicClouds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_SimplifiedColor_Curve SimplifiedColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_CloudVortex_Curve CloudVortex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_Map000_Sky_Curve Map000_Sky;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_Map000_Cloud_Curve Map000_Cloud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_CloudWisps_Curve CloudWisps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_CustomCloudShadow_Curve CustomCloudShadow;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyCurveParamNative();
};

