#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UltraDynamicSkyParam_VolumetricClouds.generated.h"

USTRUCT(BlueprintType)
struct FUltraDynamicSkyParam_VolumetricClouds {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BottomAltitude;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LayerHeightScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BaseCloudsScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SubNoiceScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double HighFrequencyNoiseAmount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ExtinctionScaleTop;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ExtinctionScaleBottom;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ShiftCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinimumErosion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ViewSampleCountScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ShadowSampleScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ShadowTracingDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BaseCloudsMipLevel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MacroVariation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MacroScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double VolumetricCloudScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor VolumetricCloudColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFogInsideClouds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTwoLayers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Layer2CoverageScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Layer2ExtinctionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Layer2CloudScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Layer2MipOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DistanceBetweenLayers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ReflectionSampleCountScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ReflectionShadowSampleCountScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MultiscatteringIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MultiscatteringOcclusionFactor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SubNoiseErosion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PhaseG;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PhaseG2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MultiscatteringEccentricity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DistanceToSampleMaxCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TracingMaxStartDistance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TracingMaxDistance_InsideCloudLayer;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TracingMaxDistance_OutsideCloudLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeToSimplifiedMaterialWhenOvercast;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SimplifiedMaterialCloudCoverageThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SimplifiedMaterialFadeLength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DistortHighFrequencyNoise;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ZDisturbance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double InsideCloudFogStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor InsideCloudFogColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double OvercastTurbulence;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloseFadeDistance;
    
    KORATUDS_WEATHERPARAMCONTROL_API FUltraDynamicSkyParam_VolumetricClouds();
};

