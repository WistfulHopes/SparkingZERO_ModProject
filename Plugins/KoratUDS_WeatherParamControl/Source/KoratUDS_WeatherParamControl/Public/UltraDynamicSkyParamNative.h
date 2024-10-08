#pragma once
#include "CoreMinimal.h"
#include "UltraDynamicSkyParam_2D_DynamicClouds.h"
#include "UltraDynamicSkyParam_BasicControls.h"
#include "UltraDynamicSkyParam_CloudVortex.h"
#include "UltraDynamicSkyParam_CloudWisps.h"
#include "UltraDynamicSkyParam_CustomCloudShadow.h"
#include "UltraDynamicSkyParam_CustomVolumetricCloudsParameter.h"
#include "UltraDynamicSkyParam_Dust.h"
#include "UltraDynamicSkyParam_FogColor.h"
#include "UltraDynamicSkyParam_FogDensity.h"
#include "UltraDynamicSkyParam_LightShafts.h"
#include "UltraDynamicSkyParam_Map000_Cloud.h"
#include "UltraDynamicSkyParam_Map000_Sky.h"
#include "UltraDynamicSkyParam_SimplifiedColor.h"
#include "UltraDynamicSkyParam_SkyLight.h"
#include "UltraDynamicSkyParam_Sun.h"
#include "UltraDynamicSkyParam_VolumetricClouds.h"
#include "UltraDynamicSkyParamNative.generated.h"

USTRUCT(BlueprintType)
struct FUltraDynamicSkyParamNative {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_BasicControls BasicControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_VolumetricClouds VolumetricClouds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_CustomVolumetricCloudsParameter CustomVolumetricCloudsParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_FogColor FogColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_FogDensity FogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_Dust Dust;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_LightShafts LightShafts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_SkyLight SkyLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_Sun Sun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_2D_DynamicClouds X2DDynamicClouds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_SimplifiedColor SimplifiedColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_CloudVortex CloudVortex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_Map000_Sky Map000_Sky;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_Map000_Cloud Map000_Cloud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_CloudWisps CloudWisps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUltraDynamicSkyParam_CustomCloudShadow CustomCloudShadow;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyParamNative();
};

