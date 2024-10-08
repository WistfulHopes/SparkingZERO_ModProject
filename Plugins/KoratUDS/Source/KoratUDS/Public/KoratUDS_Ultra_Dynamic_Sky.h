#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/EngineTypes.h"
#include "EKoratUDS_UDS_ColorMode.h"
#include "EKoratUDS_UDS_FeatureToggle.h"
#include "EKoratUDS_UDS_LensFlareType.h"
#include "EKoratUDS_UDS_NoiseType.h"
#include "EKoratUDS_UDS_PropertyType.h"
#include "EKoratUDS_UDS_SkyLightMode.h"
#include "EKoratUDS_UDS_SkyMode.h"
#include "EKoratUDS_UDS_VolRT_Mode.h"
#include "KoratUDS_Ultra_Dynamic_Sky.generated.h"

class ADirectionalLight;
class AExponentialHeightFog;
class ASkyLight;
class UArrowComponent;
class UBillboardComponent;
class UCurveFloat;
class UCurveLinearColor;
class UDirectionalLightComponent;
class UExponentialHeightFogComponent;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UNiagaraComponent;
class UNiagaraSystem;
class UPostProcessComponent;
class USkyAtmosphereComponent;
class USkyLightComponent;
class UStaticMeshComponent;
class UTexture2D;
class UTextureCube;
class UVolumeTexture;
class UVolumetricCloudComponent;

UCLASS(Blueprintable)
class KORATUDS_API AKoratUDS_Ultra_Dynamic_Sky : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSunsetMulticastDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSunriseMulticastDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMidnightMulticastDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHourlyMulticastDelegate, int32, Hour);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* NightFilterCurve;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RefreshSettings;
    
    UPROPERTY(EditAnywhere, Interp, SaveGame, meta=(AllowPrivateAccess=true))
    double TimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUDS_UDS_SkyMode SkyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUDS_UDS_ColorMode ColorMode;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double CloudCoverage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Fog;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double OverallIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Contrast;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Saturation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DirectionalBalance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DawnTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DuskTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double NightBrightness;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpreadOutTickBehaviorsOver3Frames;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlyFullyUpdateActiveParametersWhenCloudCoverageChanges;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double DirectionalLightsAbsentBrightness;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double OvercastNightBrightness;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseSkyModeScalabilityMap;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, EKoratUDS_UDS_SkyMode> SkyModeScalabilityMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DimDirectionalLightsWithCloudCoverage;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double DimmingRangeLowerBound;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double DimmingRangeUpperBound;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double DimmingRangeExponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CustomSkySphereMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool AnimateTimeOfDay;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DayLength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double NightLength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LightsUpdatePeriod;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SunriseEventOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SunsetEventOffset;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double TimeSpeed;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double InternalTimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalDaysElapsed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CurrentTimeOfDayOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LastFrameTimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventHour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Move_Static_Stationary_Lights;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUDS_UDS_VolRT_Mode VolumetricCloudRenderingMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BottomAltitude;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LayerHeightScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BaseCloudsScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SubNoiseScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double HighFrequencyNoiseAmount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DistortHighFrequencyNoise;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ExtinctionScaleTop;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ExtinctionScaleBottom;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ShiftCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ZDisturbance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinimumErosion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ViewSampleCountScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DistanceToSampleMaxCount;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ShadowSampleScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ShadowTracingDistance;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double ReflectionSampleCountScale;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double ReflectionShadowSampleCountScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUDS_UDS_NoiseType VolumetricCloudNoiseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* VolumetricCustomNoiseTexture;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BaseCloudsMipLevel;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double MultiscatteringIntensity;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double MultiscatteringOcclusionFactor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double SubNoiseErosion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MacroVariation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MacroScale;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double PhaseG;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double PhaseG2;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double MultiscatteringEccentricity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double VolumetricCloudsScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor VolumetricCloudColor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double TracingMaxStartDistance;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double TracingMaxDistance_InsideCloudLayer;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double TracingMaxDistance_OutsideCloudLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableFogInsideClouds;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double InsideCloudFogStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor InsideCloudFogColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double OvercastTurbulence;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloseFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TwoLayers;
    
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
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double HighFrequencyMipIncreaseByDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChangeToSimplifiedMaterialWhenOvercast;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double SimplifiedMaterialCloudCoverageThreshold;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double SimplifiedMaterialFadeLength;
    
protected:
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double TopBottomDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentVolumetricCloudsMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector CloudsPosition;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StandardBaseCloudsSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BaseCloudHeight;
    
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double LowMaterialQualitySampleCountScale;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double MediumMaterialQualitySampleCountScale;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UVolumeTexture> EpicQualityVolumeTexture;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UVolumeTexture> HighQualityVolumeTexture;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UVolumeTexture> LowQualityVolumeTexture;
    
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double EpicMaterialQualitySampleCountScale;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> InsideCloudFogParentMaterial;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> InsideCloudFogSystem;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> PostProcessCloudFogParentMaterial;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> OvercastTurbulenceParentMaterial;
    
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
    bool OneCloudLayer;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudHeightLayer1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudHeightLayer2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double OvercastSwirlingTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUDS_UDS_NoiseType CloudNoiseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CustomNoiseTexture;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double SunShaderIntensity;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double DirectionalLightingIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SunHighlightRadius;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudOpacity;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double HorizonDensityMultiplier;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double ZenithDensityMultiplier;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double LatitudeGradientPosition;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double LatitudeGradientWidth;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double AroundSunDensityMultiplier;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double AroundSunDensityExponent;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double AroundMoonDensityMultiplier;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double AroundMoonDensityExponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ShineIntensityCurve;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SunHighlightIntensityCurve;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SunHighlightRadiusCurve;
    
protected:
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double ShineVariation;
    
public:
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double CloudSpeed;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double CloudDirection;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double CloudPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RandomizeCloudFormationOnRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CloudsMoveWithTimeOfDay;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TimeOfDayMovementMultiplier;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LastCloudsTimeOfDayFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartingCloudTextureVelocity;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseCloudShadows;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudShadowsIntensityWhenSunny;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudShadowsIntensityWhenOvercast;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudShadowsSoftnessWhenSunny;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudShadowsSoftnessWhenOvercast;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FogShadows;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DustShadows;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double X2DCloudShadowsSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double X2DCloudShadowsScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CustomLightFunctionMaterial;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceLightFunctionsOn;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudWispsOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CloudWispsTexture;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudWispsColorIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ManuallyPositionSunTarget;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SunLightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EComponentMobility::Type> SunMobility;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double SunAngle;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double SunInclination;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SunVerticalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SunCastsShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SunLightColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SunRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SunSoftness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SunVolumetricScatteringIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ExtendDawnAndDusk;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SunDiskIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* SunDiskColorCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ScaleSunRadiusAsItNearsHorizon;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SunSpecularScale;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SunYaw;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SunZVector;
    
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxSunSourceAngleScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SunSourceAngleSoftness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ManuallyPositionMoonTarget;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MoonLightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EComponentMobility::Type> MoonMobility;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MoonAngle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MoonInclination;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MoonVerticalOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MoonOrbitOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MoonCastsShadows;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MoonScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MoonPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MoonPhaseChangesOverTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DarkSideBrightness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MoonTextureIntensity_Night;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MoonTextureIntensity_Day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MoonLightColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MoonMaterialColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double NewMoonLightBrightness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MoonTextureRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CustomMoonTexture;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MoonGlowIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MoonVolumetricScatteringIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ScaleMoonRadiusAsItNearsHorizon;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MoonSpecularScale;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MoonLightCurrentIntensityValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> MoonMasksTexture;
    
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxMoonSourceAngleScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MoonSourceAngleSoftness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUDS_UDS_SkyLightMode SkyLightMode;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double SkyLightIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EComponentMobility::Type> SkyLight_Mobility;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SkyLightTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SkyLightColorMultiplier_Day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SkyLightColorMultiplier_Dawn_Dusk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SkyLightColorMultiplier_Night;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkyLightCastsShadows;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double DFAOMinOcclusion;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double DFAOExponent;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DynamicSkyLightTransitionTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TargetSkyLightMultiplier;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DynamicSkyLightMultiplier;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RealTimeCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CapturedSkyLightLowerHemisphereTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RecaptureSkyLightPeriodically;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SkyLightRecapturePeriod_Seconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FactorAbsentDirectionalLightsBrightness;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RealTimeCaptureUsesTimeSlicing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTextureCube> CustomCubemap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTextureCube> FlatCubemap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TintedSkyLightLowerHemisphereColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FogColorIntensityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* FogScatteringColorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FogInscatteringSun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FogInscatteringMoon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* FogDirectionalScatteringColorCurve;
    
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
    UCurveFloat* SkyAtmosphereFogInfluenceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseVolumetricFog;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AmbientFogColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DirectionalInscatteringFogColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DirectionalBaseFogColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ScaledDirectionalBaseFogColor;
    
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BaseFogDensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FoggyDensityContribution;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudyDensityContribution;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DustDensityContribution;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ScaleTotalFogDensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FogStartDistanceWhenClear;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FogDensityWhereStartDistanceReachesZero;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BaseHeightFogFalloff;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudyHeightFogFalloff;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FoggyHeightFogFalloff;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DustyHeightFogFalloff;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FogSnowContribution;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double HeightFogDensity;
    
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DustAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DustColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ControlSkyAtmosphereSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor RayleighScatteringColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DesaturateRayleighScatteringWhenCloudy;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double BrightenRayleighScatteringWhenCloudy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Sunset_SunriseColor_Absorption;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Sunset_SunriseColorIntensity_AbsorptionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KeepPlanetTopAtCameraXYLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BaseSkyColor_Day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BaseSkyColor_Dawn_Dusk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BaseSkyColor_Night;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CloudLightColor_Day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CloudLightColor_Dawn_Dusk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CloudLightColor_Night;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CloudDarkColor_Day;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CloudDarkColor_Dawn_Dusk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor CloudDarkColor_Night;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SunGlowColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DirectionalIntensityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* DirectionalLightScatteringCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AtmosphericScatteringLUTTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableSunLightShaftBloom;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SunLightShaftMaxBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SunLightShaftBloomThresholdCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* SunLightShaftBloomScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SunLightShaftTintColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableMoonLightShaftBloom;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MoonLightShaftMaxBrightness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MoonLightShaftBloomThreshold;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MoonLightShaftBloomScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MoonLightShaftTintColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableSunLensFlare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUDS_UDS_LensFlareType LensFlareType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LensFlareStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LensFlareTint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* LensFlareMID;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CustomLensFlareParentInstance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ScaleFlareElements;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StarsIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor StarsColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StarsSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StarsTiling;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double StarsDaytimeIntensity;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TilingStarsTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> RealStarsTexture;
    
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double StarsPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CustomTilingStarsTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CustomRealStarsTexture;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* StarsIntensityCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double NightSkyGlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NightSkyGlowColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LightPollutionIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LightPollutionColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseAuroras;
    
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double AuroraIntensity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AuroraSpeed;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double AuroraPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AuroraColor1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AuroraColor2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor AuroraColor3;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AuroraLines;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AuroraIntensityCurve;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double VolumetricAuroraSampleCountScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double VolumetricAuroraLayerHeight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double VolumetricAuroraBottomAltitude;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> VolumetricAuroraParentMaterial;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUDS_UDS_FeatureToggle SunLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADirectionalLight* CustomSunLightActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUDS_UDS_FeatureToggle MoonLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADirectionalLight* CustomMoonLightActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUDS_UDS_FeatureToggle SkyLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASkyLight* CustomSkyLightActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUDS_UDS_FeatureToggle HeightFogFT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AExponentialHeightFog* CustomHeightFogActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Weather_BP;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LastFrameCloudCoverage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CloudCoverageChangeThisFrame;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TransitionTimeA;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TransitionTimeB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool TransitioningTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEasingFunc::Type> TransitionEasingFunction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TransitionEasingExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TransitionTimer;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TransitionDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TransitionDaysCounted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TransitionCanGoBackwards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Sky_MID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* SunCloudShadowsMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MoonCloudShadowsMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Volumetric_Clouds_MID_Complex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Volumetric_Clouds_MID_Simplified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* StaticCloudsMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Volumetric_Aurora_MID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Inside_Clouds_Fog_MID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TSoftObjectPtr<UMaterialInstance>> SkyMIDParentInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CloudFogPostProcessMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* OvercastTurbulenceMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> VolumetricCloudAndShadowMIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> VolumetricCloudMIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> SkyAndStaticCloudsMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> SkyAndShadowsMIDs;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* Cloud_Fog_PostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    UArrowComponent* MoonIconArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    UArrowComponent* SunIconArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    UBillboardComponent* SunIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    UBillboardComponent* MoonIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Overcast_Turbulence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* LensFlare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    USkyLightComponent* RealtimeCaptureBasedSkyLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* Inside_Cloud_Fog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    UVolumetricCloudComponent* VolumetricAurora;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticCloudsSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    UVolumetricCloudComponent* VolumetricCloud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    USkyLightComponent* CubeMap_SkyLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    USkyLightComponent* CaptureBasedSkyLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* Exposure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    UExponentialHeightFogComponent* HeightFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* Moon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* Sun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    USkyAtmosphereComponent* SkyAtmosphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    UArrowComponent* Moon_Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    UArrowComponent* Sun_Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonTransactional, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Ultra_Dynamic_Sky_Sphere;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* Sun_LightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* Moon_LightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkyLightComponent* SkyLightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExponentialHeightFogComponent* HeightFogComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector SunTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector MoonTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Mobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Runtime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FogColorsFromSkyAtmosphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentTickSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, EKoratUDS_UDS_PropertyType> Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisallowTickSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideWithNewChanges;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CorrectedForVolMode;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsingCloudFogPostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentCameraLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForwardShading;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsexExposureRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ExposureMin;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ExposureMax;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExtendDefaultLuminanceRange;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseMobileOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUDS_UDS_SkyMode VolumetricCloudsReplacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUDS_UDS_SkyLightMode RealTimeCaptureSkyLightReplacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AdjustForMobileRenderer;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MobilePlatforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SimulateRealSun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SimulateRealMoon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SimulateRealStars;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Latitude;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Longitude;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TimeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Year;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Month;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 Day;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double NorthYaw;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SimulationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TrueRealWorldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ApplyDaylightSavingsTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DSTStartMonth;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DSTStartDay;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DSTEndMonth;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DSTEndDay;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DSTChangeHour;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Months;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Months_LeapYear;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double StellarCalibration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LunarOrbitCalibration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LunarInclinationCalibration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DaylightSavingsTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SimulatedSunriseTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SimulatedSunsetTime;
    
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TimeOfDayReplicationPeriod;
    
protected:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ReplicatedTimeOfDay, meta=(AllowPrivateAccess=true))
    double ReplicatedTimeOfDay;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    double ReplicatedMoonPhase;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    double ReplicatedDayLength;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    double ReplicatedNightLength;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    double ReplicatedTimeSpeed;
    
    UPROPERTY(EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    double ReplicatedSimulationSpeed;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSunsetMulticastDelegate Sunset;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSunriseMulticastDelegate Sunrise;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMidnightMulticastDelegate Midnight;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHourlyMulticastDelegate Hourly;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> VolumetricCloudsParentMaterials_TwoLayerSimplified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> VolumetricCloudsParentMaterials_Simplified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> VolumetricCloudsParentMaterials_TwoLayerComplex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> VolumetricCloudsParentMaterials_Complex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> VolumetricCloudsBaseCloudsTexture_VoronoiSmooth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> VolumetricCloudsBaseCloudsTexture_VoronoiDiverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> VolumetricCloudsBaseCloudsTexture_Custom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> CloudShadowsParentMaterial_SkyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> CloudShadowsParentMaterial_NotSkyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> LensFlareParentMaterial_ZoomChromatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> LensFlareParentMaterial_Anamorphic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> LensFlareParentMaterial_X35mmPrime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> X2DCloudsBaseTexture_VoronoiSmooth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> X2DCloudsBaseTexture_VoronoiDiverse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> StaticCloudsParentMaterial_UseSkyAtmosphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> StaticCloudsParentMaterial_NotUseSkyAtmosphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ApproximateRealSunMoonandStars_EquationOfTimeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* UltraDynamicWeatherParameters;
    
public:
    AKoratUDS_Ultra_Dynamic_Sky(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> X2DCloudsBaseTexture();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void VolumetricCloudsParentMaterials(TSoftObjectPtr<UMaterialInterface>& outSimplified, TSoftObjectPtr<UMaterialInterface>& outComplex);
    
    UFUNCTION(BlueprintPure)
    double VolumetricCloudShadowsAltitude();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> VolumetricCloudsBaseCloudsTexture();
    
    UFUNCTION(BlueprintPure)
    double VolumetricCloudLayerScale();
    
    UFUNCTION(BlueprintPure)
    double VolumetricCloudLayerHeight();
    
    UFUNCTION(BlueprintPure)
    double VolumetricCloudCloudTopAltitude();
    
    UFUNCTION(BlueprintPure)
    double VolumetricCloudBaseCloudHeight();
    
    UFUNCTION(BlueprintPure)
    double VolumetricAuroraIntensity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Using2DClouds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseSkyAtmosphere();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateVariablesControlledByWeather();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateStaticVariables();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateStaticClouds();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateSettingsBasedOnPlatformAndScalability();
    
    UFUNCTION(BlueprintCallable)
    void UpdateReplicatedToD();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateReplicatedTime();
    
    UFUNCTION(BlueprintCallable)
    void UpdateOvercastTurbulence();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMoonParameters();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateLights();
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateLensFlare();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDynamicSkyLightMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDirectionalLights(bool MoveStaticLights);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentVolumetricCloudsMID();
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateActiveVariables();
    
protected:
    UFUNCTION(BlueprintPure)
    double TwilightBrightnessFalloff(double Z);
    
public:
    UFUNCTION(BlueprintCallable)
    void TransitionTimeOfDay(double NewTimeOfDay, double TransitionDuration_Seconds, TEnumAsByte<EEasingFunc::Type> EasingFunction, double EasingExponent, bool AllowTimeGoingBackwards);
    
    UFUNCTION(BlueprintCallable)
    void TransitionSkyLightIntensity(double NewSkyLightIntensityMultiplier, double TransitionTime);
    
protected:
    UFUNCTION(BlueprintPure)
    double TotalTimeElapsed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor TintColorByWeather(const FLinearColor& ClearColor, const FLinearColor& PartlyCloudyColor, const FLinearColor& OvercastColor);
    
    UFUNCTION(BlueprintPure)
    double TimeOfDayOffset();
    
public:
    UFUNCTION(BlueprintCallable)
    void TimedOverrideWithNewChanges();
    
protected:
    UFUNCTION(BlueprintCallable)
    void TickTimeTransition();
    
    UFUNCTION(BlueprintCallable)
    bool TickSetGate(int32 Set);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector SunForwardVector();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UMaterialInterface> StaticCloudsParentMaterial();
    
    UFUNCTION(BlueprintPure)
    double SkyMIDCloudDensity();
    
    UFUNCTION(BlueprintPure)
    double SkyAtmosphereFogContribution();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor SimplifiedCurrentColor(const FLinearColor& DayColor, const FLinearColor& Dawn_DuskColor, const FLinearColor& NightColor);
    
    UFUNCTION(BlueprintCallable)
    void SetUpOvercastTurbulence();
    
    UFUNCTION(BlueprintCallable)
    void SetUpLensFlare();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTimeOfDayUsingTimeCode(const FTimecode& Timecode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSunAndMoonRootRotation();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDateAndTime(const FDateTime& DateTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCloudTiming();
    
    UFUNCTION(BlueprintPure)
    double ScaleSampleCount(double In);
    
public:
    UFUNCTION(BlueprintCallable)
    void RestartInsideCloudFog();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RecaptureSkyLight();
    
    UFUNCTION(BlueprintCallable)
    void QueryProjectSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor OvercastLightContribution(bool ForVolumetricClouds);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedTimeOfDay();
    
    UFUNCTION(BlueprintPure)
    double NightFilter();
    
    UFUNCTION(BlueprintPure)
    double MoonPhaseMultiplier();
    
    UFUNCTION(BlueprintPure)
    double MoonLightVolumetricScatteringIntensity();
    
    UFUNCTION(BlueprintPure)
    double MoonLightSpecularScale();
    
    UFUNCTION(BlueprintPure)
    double MoonLightCurrentIntensity();
    
    UFUNCTION(BlueprintCallable)
    void LoadRequiredAssets();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UMaterialInterface> LensFlareParentMaterial();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSunLightCastingShadows();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoonLightCastingShadows();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationInsideCloudLayer(const FVector& Location);
    
public:
    UFUNCTION(BlueprintCallable)
    void IncrementDay();
    
protected:
    UFUNCTION(BlueprintPure)
    double H_M_S_MSToTimeOfDay(int32 Hours, int32 Minutes, int32 Seconds, int32 Miliseconds);
    
    UFUNCTION(BlueprintCallable)
    void GetVolumetricCloudEmissiveColors(FLinearColor& outBottom, FLinearColor& outTop);
    
public:
    UFUNCTION(BlueprintCallable)
    FTimecode GetTimeOfDayInRealTimeFormat();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UMaterialInterface> GetSkyMIDParentMaterialInstance();
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentVolumetricCloudExtinctionScales(double& outTop, double& outBottom);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentSkyLightColorAndIntensity(double& outIntensity, FLinearColor& OutColor);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentFogBaseColors(FLinearColor& outAmbientFogColor, FLinearColor& outDirectionalBaseColor, FLinearColor& outScaledDirectionalBaseColor);
    
public:
    UFUNCTION(BlueprintCallable)
    FDateTime GetCurrentDateAndTime();
    
protected:
    UFUNCTION(BlueprintCallable)
    void GetCurrentCloudShadowsIntensityAndSoftness(double& outIntensity, double& outSoftness);
    
    UFUNCTION(BlueprintCallable)
    void ForceValidDay();
    
    UFUNCTION(BlueprintPure)
    double FogStartDistance();
    
    UFUNCTION(BlueprintPure)
    double FogHeightFalloff();
    
    UFUNCTION(BlueprintPure)
    double FlatCloudinessAlpha();
    
    UFUNCTION(BlueprintCallable)
    void FireEditorDispatchers();
    
    UFUNCTION(BlueprintCallable)
    void FinishTimeTransition();
    
    UFUNCTION(BlueprintCallable)
    void FindRealSunset_SunriseTimes();
    
    UFUNCTION(BlueprintPure)
    double FindOverallIntensity(double Darkening);
    
    UFUNCTION(BlueprintPure)
    double DirectionalLightDimming();
    
    UFUNCTION(BlueprintPure)
    double DirectionalInscatteringMultiplier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DimmingDirectionalLights();
    
public:
    UFUNCTION(BlueprintCallable)
    void DayEnded();
    
protected:
    UFUNCTION(BlueprintPure)
    double CurrentZDisturbance();
    
    UFUNCTION(BlueprintPure)
    double CurrentWispsOpacity();
    
    UFUNCTION(BlueprintPure)
    double CurrentVolumetricCloudTaperPosition();
    
    UFUNCTION(BlueprintPure)
    double CurrentVolumetricCloudSubnoiseAmount();
    
    UFUNCTION(BlueprintPure)
    double CurrentVolumetricCloudsDensity();
    
    UFUNCTION(BlueprintPure)
    double CurrentVolumetricCloudMultiscatteringOcclusion();
    
    UFUNCTION(BlueprintPure)
    double CurrentVolumetricCloudMacroVariation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor CurrentVolumetricCloudAlbedo();
    
    UFUNCTION(BlueprintPure)
    double CurrentSunSourceAngle();
    
    UFUNCTION(BlueprintPure)
    double CurrentSunsetEventTime();
    
    UFUNCTION(BlueprintPure)
    double CurrentSunriseEventTime();
    
    UFUNCTION(BlueprintPure)
    double CurrentSunRadius();
    
    UFUNCTION(BlueprintPure)
    double CurrentSunLightIntensity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor CurrentSunLightColor();
    
    UFUNCTION(BlueprintPure)
    double CurrentSunDiskIntensity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor CurrentSunDiskColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor CurrentStarsColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor CurrentSkyLightLowerHemisphereColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor CurrentSkyAmbientColor();
    
    UFUNCTION(BlueprintPure)
    double CurrentSaturation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor CurrentRayleighScatteringColor();
    
    UFUNCTION(BlueprintPure)
    double CurrentOvercastSwirl();
    
    UFUNCTION(BlueprintPure)
    double CurrentOverallIntensity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor CurrentNightSkyGlow();
    
    UFUNCTION(BlueprintPure)
    double CurrentMoonSourceAngle();
    
    UFUNCTION(BlueprintPure)
    void CurrentMoonScaleAndCutoutValue(double& outScale, double& outCutout);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor CurrentMoonPhaseAngle();
    
    UFUNCTION(BlueprintPure)
    double CurrentMoonMaterialIntensity();
    
    UFUNCTION(BlueprintPure)
    double CurrentMoonLitPercent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor CurrentMoonLightMaterialColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor CurrentMoonLightColor();
    
    UFUNCTION(BlueprintPure)
    double CurrentMieScatteringScale();
    
    UFUNCTION(BlueprintPure)
    double CurrentMieAnisotropy();
    
    UFUNCTION(BlueprintPure)
    double CurrentMaxTraceDistance();
    
    UFUNCTION(BlueprintPure)
    double CurrentLitIntensity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor CurrentLightPollution();
    
    UFUNCTION(BlueprintPure)
    double CurrentLerpToSimplifiedClouds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor CurrentLensFlareColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor CurrentFogInscatteringColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor CurrentFogDirectionalInscatteringColor();
    
    UFUNCTION(BlueprintPure)
    double CurrentFogDensity();
    
    UFUNCTION(BlueprintPure)
    double CurrentBaseCloudsScale();
    
    UFUNCTION(BlueprintPure)
    void CurrentAppliedCloudTopAndBottom(double& outBottom, double& outTop);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor Current2DCloudTint();
    
    UFUNCTION(BlueprintPure)
    FTimecode ConvertTimeOfDayToTimeCode(double Time);
    
public:
    UFUNCTION(BlueprintCallable)
    void ConstructionScriptFunction(bool RunByCounterpart, bool MoveStaticLights);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CloudTextureVelocity();
    
    UFUNCTION(BlueprintPure)
    double CloudsTimeOfDayFactor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UMaterialInterface> CloudShadowsParentMaterial();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor CloudShadowsLightVectorProcess(const FVector& Vector);
    
    UFUNCTION(BlueprintPure)
    double CloudShadowsCloudDensity();
    
    UFUNCTION(BlueprintPure)
    double CloudDarkening();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CloudCoverageHasChanged();
    
    UFUNCTION(BlueprintCallable)
    void CheckForDaylightSavingsTime();
    
    UFUNCTION(BlueprintPure)
    double CancelShadowsValue(const FVector& LightVector);
    
    UFUNCTION(BlueprintPure)
    double CalculateNightBrightness();
    
    UFUNCTION(BlueprintCallable)
    void ApproximateRealSunMoonAndStars(int32 Month_, int32 Day_, int32 Year_, double TimeOfDay_, double TimeZone_, bool OnlyCalculateSun, FVector& outSunVector, FVector& outMoonVector, double& outRealPhase, FVector& outPhaseAlignment, double& outCelestialOrbit, FLinearColor& outCelestialYaw);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyVolumetricMode(EKoratUDS_UDS_VolRT_Mode Mode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyConsoleVariableWithCheck(const FString& Cvar, double setting, int32 Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMaterialInstanceDynamic*> AllVolumetricCloudMIDs(bool Shadows);
    
    UFUNCTION(BlueprintPure)
    void AdjustedExposureRange(double& outMin, double& outMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor AdjustColorForNightBrightness(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintPure)
    double AbsentDirectionalLightsBrightness();
    
};

