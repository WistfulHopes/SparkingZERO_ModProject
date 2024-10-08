#include "KoratUDS_Ultra_Dynamic_Sky.h"
#include "Components/ArrowComponent.h"
#include "Components/BillboardComponent.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Components/PostProcessComponent.h"
#include "Components/SkyAtmosphereComponent.h"
#include "Components/SkyLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/VolumetricCloudComponent.h"
#include "NiagaraComponent.h"
#include "Net/UnrealNetwork.h"

AKoratUDS_Ultra_Dynamic_Sky::AKoratUDS_Ultra_Dynamic_Sky(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Root"));
    this->RefreshSettings = false;
    this->TimeOfDay = 960.00f;
    this->SkyMode = EKoratUDS_UDS_SkyMode::VolumetricClouds;
    this->ColorMode = EKoratUDS_UDS_ColorMode::SkyAtmosphere;
    this->CloudCoverage = 1.14f;
    this->Fog = 1.00f;
    this->OverallIntensity = 1.00f;
    this->Contrast = 0.20f;
    this->Saturation = 1.00f;
    this->DirectionalBalance = 1.00f;
    this->DawnTime = 600.00f;
    this->DuskTime = 1800.00f;
    this->NightBrightness = 1.00f;
    this->SpreadOutTickBehaviorsOver3Frames = true;
    this->OnlyFullyUpdateActiveParametersWhenCloudCoverageChanges = true;
    this->DirectionalLightsAbsentBrightness = 1.50f;
    this->OvercastNightBrightness = 0.50f;
    this->UseSkyModeScalabilityMap = false;
    this->DimDirectionalLightsWithCloudCoverage = false;
    this->DimmingRangeLowerBound = 1.40f;
    this->DimmingRangeUpperBound = 2.00f;
    this->DimmingRangeExponent = 2.00f;
    this->CustomSkySphereMaterial = NULL;
    this->AnimateTimeOfDay = false;
    this->DayLength = 30.00f;
    this->NightLength = 15.00f;
    this->LightsUpdatePeriod = 0.00f;
    this->SunriseEventOffset = 0.00f;
    this->SunsetEventOffset = 0.00f;
    this->TimeSpeed = 1.00f;
    this->InternalTimeOfDay = 0.00f;
    this->TotalDaysElapsed = 0;
    this->CurrentTimeOfDayOffset = 0.00f;
    this->LastFrameTimeOfDay = 0.00f;
    this->EventHour = 0;
    this->Move_Static_Stationary_Lights = false;
    this->VolumetricCloudRenderingMode = EKoratUDS_UDS_VolRT_Mode::BackgroundOnlyClouds;
    this->BottomAltitude = 0.70f;
    this->LayerHeightScale = 1.00f;
    this->BaseCloudsScale = 1.00f;
    this->SubNoiseScale = 1.25f;
    this->HighFrequencyNoiseAmount = 0.18f;
    this->DistortHighFrequencyNoise = 0.17f;
    this->ExtinctionScaleTop = 35.00f;
    this->ExtinctionScaleBottom = 0.00f;
    this->ShiftCurve = 1.00f;
    this->ZDisturbance = 0.18f;
    this->MinimumErosion = 0.05f;
    this->ViewSampleCountScale = 3.00f;
    this->DistanceToSampleMaxCount = 4.00f;
    this->ShadowSampleScale = 0.50f;
    this->ShadowTracingDistance = 0.50f;
    this->ReflectionSampleCountScale = 2.00f;
    this->ReflectionShadowSampleCountScale = 0.50f;
    this->VolumetricCloudNoiseType = EKoratUDS_UDS_NoiseType::VoronoiDiverse;
    this->VolumetricCustomNoiseTexture = NULL;
    this->BaseCloudsMipLevel = 3.00f;
    this->MultiscatteringIntensity = 0.65f;
    this->MultiscatteringOcclusionFactor = 0.17f;
    this->SubNoiseErosion = 0.85f;
    this->MacroVariation = 0.30f;
    this->MacroScale = 1.30f;
    this->PhaseG = 0.85f;
    this->PhaseG2 = 0.20f;
    this->MultiscatteringEccentricity = 0.20f;
    this->VolumetricCloudsScale = 1.00f;
    this->TracingMaxStartDistance = 50.00f;
    this->TracingMaxDistance_InsideCloudLayer = 8.00f;
    this->TracingMaxDistance_OutsideCloudLayer = 20.00f;
    this->EnableFogInsideClouds = true;
    this->InsideCloudFogStrength = 1.00f;
    this->OvercastTurbulence = 0.75f;
    this->CloseFadeDistance = 100000.00f;
    this->TwoLayers = false;
    this->Layer2CoverageScale = 1.00f;
    this->Layer2ExtinctionScale = 0.05f;
    this->Layer2MipOffset = 2.00f;
    this->DistanceBetweenLayers = 0.00f;
    this->HighFrequencyMipIncreaseByDistance = 300000.00f;
    this->ChangeToSimplifiedMaterialWhenOvercast = true;
    this->SimplifiedMaterialCloudCoverageThreshold = 2.20f;
    this->SimplifiedMaterialFadeLength = 0.20f;
    this->TopBottomDistribution = 1.45f;
    this->CurrentVolumetricCloudsMID = -1;
    this->StandardBaseCloudsSize = 1221581.25f;
    this->BaseCloudHeight = 15.00f;
    this->LowMaterialQualitySampleCountScale = 0.80f;
    this->MediumMaterialQualitySampleCountScale = 0.90f;
    this->EpicMaterialQualitySampleCountScale = 1.15f;
    this->SoftenCloudLayer1 = 0.00f;
    this->SoftenCloudLayer2 = 0.00f;
    this->SharpenOuterEdge = 0.00f;
    this->CloudTilingLayer1 = 4.00f;
    this->CloudTilingLayer2 = 3.00f;
    this->SoftenHorizon = 2.00f;
    this->OneCloudLayer = false;
    this->CloudHeightLayer1 = 0.70f;
    this->CloudHeightLayer2 = 0.15f;
    this->OvercastSwirlingTexture = 2.00f;
    this->CloudNoiseType = EKoratUDS_UDS_NoiseType::VoronoiDiverse;
    this->CustomNoiseTexture = NULL;
    this->SunShaderIntensity = 0.35f;
    this->DirectionalLightingIntensity = 3.00f;
    this->SunHighlightRadius = 0.04f;
    this->CloudOpacity = 1.00f;
    this->HorizonDensityMultiplier = 1.10f;
    this->ZenithDensityMultiplier = 0.90f;
    this->LatitudeGradientPosition = 0.25f;
    this->LatitudeGradientWidth = 50.00f;
    this->AroundSunDensityMultiplier = 1.00f;
    this->AroundSunDensityExponent = 25.00f;
    this->AroundMoonDensityMultiplier = 1.00f;
    this->AroundMoonDensityExponent = 45.00f;
    this->ShineVariation = 1.00f;
    this->CloudSpeed = 0.10f;
    this->CloudDirection = 0.00f;
    this->CloudPhase = 0.00f;
    this->RandomizeCloudFormationOnRun = true;
    this->CloudsMoveWithTimeOfDay = false;
    this->TimeOfDayMovementMultiplier = 1.00f;
    this->LastCloudsTimeOfDayFactor = 0.00f;
    this->UseCloudShadows = true;
    this->CloudShadowsIntensityWhenSunny = 0.50f;
    this->CloudShadowsIntensityWhenOvercast = 1.00f;
    this->CloudShadowsSoftnessWhenSunny = 0.10f;
    this->CloudShadowsSoftnessWhenOvercast = 0.20f;
    this->FogShadows = 0.80f;
    this->DustShadows = 1.00f;
    this->X2DCloudShadowsSpeed = 1.00f;
    this->X2DCloudShadowsScale = 450000.00f;
    this->CustomLightFunctionMaterial = NULL;
    this->ForceLightFunctionsOn = true;
    this->CloudWispsOpacity = 0.50f;
    this->CloudWispsColorIntensity = 1.00f;
    this->ManuallyPositionSunTarget = false;
    this->SunLightIntensity = 4.65f;
    this->SunMobility = EComponentMobility::Movable;
    this->SunAngle = 0.00f;
    this->SunInclination = 30.00f;
    this->SunVerticalOffset = 0.00f;
    this->SunCastsShadows = true;
    this->SunRadius = 1.00f;
    this->SunSoftness = 4.00f;
    this->SunVolumetricScatteringIntensity = 1.00f;
    this->ExtendDawnAndDusk = 0.00f;
    this->SunDiskIntensity = 4.00f;
    this->ScaleSunRadiusAsItNearsHorizon = 1.00f;
    this->SunSpecularScale = 1.00f;
    this->SunYaw = 0.00f;
    this->SunZVector = 0.00f;
    this->MaxSunSourceAngleScale = 20.00f;
    this->SunSourceAngleSoftness = 1.00f;
    this->ManuallyPositionMoonTarget = false;
    this->MoonLightIntensity = 0.20f;
    this->MoonMobility = EComponentMobility::Movable;
    this->MoonAngle = 15.00f;
    this->MoonInclination = 35.00f;
    this->MoonVerticalOffset = 0.04f;
    this->MoonOrbitOffset = 0.00f;
    this->MoonCastsShadows = true;
    this->MoonScale = 0.70f;
    this->MoonPhase = 0.00f;
    this->MoonPhaseChangesOverTime = false;
    this->DarkSideBrightness = 0.03f;
    this->MoonTextureIntensity_Night = 0.20f;
    this->MoonTextureIntensity_Day = 0.60f;
    this->NewMoonLightBrightness = 0.05f;
    this->MoonTextureRotation = 0.00f;
    this->CustomMoonTexture = NULL;
    this->MoonGlowIntensity = 0.12f;
    this->MoonVolumetricScatteringIntensity = 1.00f;
    this->ScaleMoonRadiusAsItNearsHorizon = 1.00f;
    this->MoonSpecularScale = 0.10f;
    this->MoonLightCurrentIntensityValue = 0.00f;
    this->MaxMoonSourceAngleScale = 20.00f;
    this->MoonSourceAngleSoftness = 1.00f;
    this->SkyLightMode = EKoratUDS_UDS_SkyLightMode::CaptureBased;
    this->SkyLightIntensity = 1.00f;
    this->SkyLight_Mobility = EComponentMobility::Movable;
    this->SkyLightTemperature = 0.00f;
    this->SkyLightCastsShadows = true;
    this->DFAOMinOcclusion = 0.20f;
    this->DFAOExponent = 0.70f;
    this->DynamicSkyLightTransitionTime = 0.00f;
    this->TargetSkyLightMultiplier = 1.00f;
    this->DynamicSkyLightMultiplier = 1.00f;
    this->RealTimeCapture = true;
    this->RecaptureSkyLightPeriodically = false;
    this->SkyLightRecapturePeriod_Seconds = 10.00f;
    this->FactorAbsentDirectionalLightsBrightness = true;
    this->RealTimeCaptureUsesTimeSlicing = true;
    this->FogColorIntensityScale = 1.00f;
    this->FoggyDesaturation = 0.50f;
    this->OvercastDesaturation = 0.50f;
    this->OvercastBrightnessDay = 0.30f;
    this->OvercastBrightnessNight = 0.30f;
    this->UseVolumetricFog = false;
    this->BaseFogDensity = 0.01f;
    this->FoggyDensityContribution = 0.30f;
    this->CloudyDensityContribution = 0.01f;
    this->DustDensityContribution = 0.80f;
    this->ScaleTotalFogDensity = 1.00f;
    this->FogStartDistanceWhenClear = 10000.00f;
    this->FogDensityWhereStartDistanceReachesZero = 0.08f;
    this->BaseHeightFogFalloff = 0.09f;
    this->CloudyHeightFogFalloff = 0.04f;
    this->FoggyHeightFogFalloff = 0.03f;
    this->DustyHeightFogFalloff = 0.03f;
    this->FogSnowContribution = 0.00f;
    this->HeightFogDensity = 0.00f;
    this->DustAmount = 0.00f;
    this->ControlSkyAtmosphereSettings = true;
    this->DesaturateRayleighScatteringWhenCloudy = 0.20f;
    this->BrightenRayleighScatteringWhenCloudy = 0.40f;
    this->Sunset_SunriseColorIntensity_AbsorptionScale = 0.00f;
    this->KeepPlanetTopAtCameraXYLocation = true;
    this->EnableSunLightShaftBloom = false;
    this->SunLightShaftMaxBrightness = 0.60f;
    this->EnableMoonLightShaftBloom = false;
    this->MoonLightShaftMaxBrightness = 0.05f;
    this->MoonLightShaftBloomThreshold = 0.20f;
    this->MoonLightShaftBloomScale = 0.70f;
    this->EnableSunLensFlare = false;
    this->LensFlareType = EKoratUDS_UDS_LensFlareType::ZoomChromatic;
    this->LensFlareStrength = 0.30f;
    this->LensFlareMID = NULL;
    this->CustomLensFlareParentInstance = NULL;
    this->ScaleFlareElements = 1.00f;
    this->StarsIntensity = 1.00f;
    this->StarsSpeed = 0.08f;
    this->StarsTiling = 3.00f;
    this->StarsDaytimeIntensity = 0.00f;
    this->StarsPhase = 0.00f;
    this->CustomTilingStarsTexture = NULL;
    this->CustomRealStarsTexture = NULL;
    this->NightSkyGlow = 0.75f;
    this->LightPollutionIntensity = 0.00f;
    this->UseAuroras = false;
    this->AuroraIntensity = 0.12f;
    this->AuroraSpeed = 0.13f;
    this->AuroraPhase = 1.00f;
    this->AuroraLines = 0.15f;
    this->VolumetricAuroraSampleCountScale = 3.00f;
    this->VolumetricAuroraLayerHeight = 1.20f;
    this->VolumetricAuroraBottomAltitude = 0.50f;
    this->SunLight = EKoratUDS_UDS_FeatureToggle::UseBuiltInComponent;
    this->CustomSunLightActor = NULL;
    this->MoonLight = EKoratUDS_UDS_FeatureToggle::UseBuiltInComponent;
    this->CustomMoonLightActor = NULL;
    this->SkyLight = EKoratUDS_UDS_FeatureToggle::UseBuiltInComponent;
    this->CustomSkyLightActor = NULL;
    this->HeightFogFT = EKoratUDS_UDS_FeatureToggle::UseBuiltInComponent;
    this->CustomHeightFogActor = NULL;
    this->Weather_BP = NULL;
    this->LastFrameCloudCoverage = -1.00f;
    this->CloudCoverageChangeThisFrame = 0.00f;
    this->TransitionTimeA = 0.00f;
    this->TransitionTimeB = 0.00f;
    this->TransitioningTime = false;
    this->TransitionEasingFunction = EEasingFunc::EaseInOut;
    this->TransitionEasingExponent = 2.00f;
    this->TransitionDuration = 0.00f;
    this->TransitionDaysCounted = 0;
    this->TransitionCanGoBackwards = false;
    this->Sky_MID = NULL;
    this->SunCloudShadowsMID = NULL;
    this->MoonCloudShadowsMID = NULL;
    this->Volumetric_Clouds_MID_Complex = NULL;
    this->Volumetric_Clouds_MID_Simplified = NULL;
    this->StaticCloudsMID = NULL;
    this->Volumetric_Aurora_MID = NULL;
    this->Inside_Clouds_Fog_MID = NULL;
    this->CloudFogPostProcessMID = NULL;
    this->OvercastTurbulenceMID = NULL;
    this->Cloud_Fog_PostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("Cloud_Fog_Post Process"));
    this->MoonIconArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Moon Icon Arrow"));
    this->SunIconArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Sun Icon Arrow"));
    this->SunIcon = CreateDefaultSubobject<UBillboardComponent>(TEXT("Sun Icon"));
    this->MoonIcon = CreateDefaultSubobject<UBillboardComponent>(TEXT("Moon Icon"));
    this->Overcast_Turbulence = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Overcast_Turbulence"));
    this->LensFlare = CreateDefaultSubobject<UPostProcessComponent>(TEXT("Lens Flare"));
    this->RealtimeCaptureBasedSkyLight = CreateDefaultSubobject<USkyLightComponent>(TEXT("Realtime Capture Based Sky Light"));
    this->Inside_Cloud_Fog = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Inside_Cloud_Fog"));
    this->VolumetricAurora = CreateDefaultSubobject<UVolumetricCloudComponent>(TEXT("VolumetricAurora"));
    this->StaticCloudsSphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticCloudsSphere"));
    this->Root = (UBillboardComponent*)RootComponent;
    this->VolumetricCloud = CreateDefaultSubobject<UVolumetricCloudComponent>(TEXT("VolumetricCloud"));
    this->CubeMap_SkyLight = CreateDefaultSubobject<USkyLightComponent>(TEXT("CubeMap_Sky Light"));
    this->CaptureBasedSkyLight = CreateDefaultSubobject<USkyLightComponent>(TEXT("Capture Based Sky Light"));
    this->Exposure = CreateDefaultSubobject<UPostProcessComponent>(TEXT("Exposure"));
    this->HeightFog = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("HeightFog"));
    this->Moon = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("Moon"));
    this->Sun = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("Sun"));
    this->SkyAtmosphere = CreateDefaultSubobject<USkyAtmosphereComponent>(TEXT("SkyAtmosphere"));
    this->Moon_Root = CreateDefaultSubobject<UArrowComponent>(TEXT("Moon_Root"));
    this->Sun_Root = CreateDefaultSubobject<UArrowComponent>(TEXT("Sun_Root"));
    this->Ultra_Dynamic_Sky_Sphere = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ultra_Dynamic_Sky_Sphere"));
    this->Sun_LightComponent = NULL;
    this->Moon_LightComponent = NULL;
    this->SkyLightComponent = NULL;
    this->HeightFogComponent = NULL;
    this->Mobile = false;
    this->Runtime = false;
    this->FogColorsFromSkyAtmosphere = false;
    this->CurrentTickSet = -1;
    this->DisallowTickSkip = false;
    this->OverrideWithNewChanges = false;
    this->CorrectedForVolMode = false;
    this->UsingCloudFogPostProcess = false;
    this->ForwardShading = false;
    this->UsexExposureRange = true;
    this->ExposureMin = 0.07f;
    this->ExposureMax = 0.85f;
    this->ExtendDefaultLuminanceRange = false;
    this->UseMobileOverrides = true;
    this->VolumetricCloudsReplacement = EKoratUDS_UDS_SkyMode::StaticClouds;
    this->RealTimeCaptureSkyLightReplacement = EKoratUDS_UDS_SkyLightMode::CubemapWithDynamicColorTinting;
    this->AdjustForMobileRenderer = true;
    this->MobilePlatforms.AddDefaulted(2);
    this->SimulateRealSun = false;
    this->SimulateRealMoon = false;
    this->SimulateRealStars = false;
    this->Latitude = 51.18f;
    this->Longitude = -1.83f;
    this->TimeZone = 0.00f;
    this->Year = 2021;
    this->Month = 3;
    this->Day = 26;
    this->NorthYaw = 0.00f;
    this->SimulationSpeed = 1.00f;
    this->TrueRealWorldTime = false;
    this->ApplyDaylightSavingsTime = true;
    this->DSTStartMonth = 3;
    this->DSTStartDay = 14;
    this->DSTEndMonth = 11;
    this->DSTEndDay = 7;
    this->DSTChangeHour = 2;
    this->Months.AddDefaulted(12);
    this->Months_LeapYear.AddDefaulted(12);
    this->StellarCalibration = 0.00f;
    this->LunarOrbitCalibration = 0.36f;
    this->LunarInclinationCalibration = 0.64f;
    this->DaylightSavingsTime = false;
    this->SimulatedSunriseTime = 0.00f;
    this->SimulatedSunsetTime = 0.00f;
    this->TimeOfDayReplicationPeriod = 1.00f;
    this->ReplicatedTimeOfDay = -1.00f;
    this->ReplicatedMoonPhase = -1.00f;
    this->ReplicatedDayLength = -1.00f;
    this->ReplicatedNightLength = -1.00f;
    this->ReplicatedTimeSpeed = -1.00f;
    this->ReplicatedSimulationSpeed = -1.00f;
    this->CaptureBasedSkyLight->SetupAttachment(RootComponent);
    this->Cloud_Fog_PostProcess->SetupAttachment(RootComponent);
    this->CubeMap_SkyLight->SetupAttachment(RootComponent);
    this->Exposure->SetupAttachment(RootComponent);
    this->HeightFog->SetupAttachment(RootComponent);
    this->Inside_Cloud_Fog->SetupAttachment(RootComponent);
    this->LensFlare->SetupAttachment(RootComponent);
    this->Moon->SetupAttachment(RootComponent);
    this->MoonIcon->SetupAttachment(RootComponent);
    this->MoonIconArrow->SetupAttachment(MoonIcon);
    this->Moon_Root->SetupAttachment(RootComponent);
    this->Overcast_Turbulence->SetupAttachment(RootComponent);
    this->RealtimeCaptureBasedSkyLight->SetupAttachment(RootComponent);
    this->SkyAtmosphere->SetupAttachment(RootComponent);
    this->StaticCloudsSphere->SetupAttachment(RootComponent);
    this->Sun->SetupAttachment(RootComponent);
    this->SunIcon->SetupAttachment(RootComponent);
    this->SunIconArrow->SetupAttachment(SunIcon);
    this->Sun_Root->SetupAttachment(RootComponent);
    this->Ultra_Dynamic_Sky_Sphere->SetupAttachment(RootComponent);
    this->VolumetricAurora->SetupAttachment(RootComponent);
    this->VolumetricCloud->SetupAttachment(RootComponent);
}

TSoftObjectPtr<UTexture2D> AKoratUDS_Ultra_Dynamic_Sky::X2DCloudsBaseTexture() {
    return NULL;
}

void AKoratUDS_Ultra_Dynamic_Sky::VolumetricCloudsParentMaterials(TSoftObjectPtr<UMaterialInterface>& outSimplified, TSoftObjectPtr<UMaterialInterface>& outComplex) {
}

double AKoratUDS_Ultra_Dynamic_Sky::VolumetricCloudShadowsAltitude() {
    return 0.0;
}

TSoftObjectPtr<UTexture2D> AKoratUDS_Ultra_Dynamic_Sky::VolumetricCloudsBaseCloudsTexture() {
    return NULL;
}

double AKoratUDS_Ultra_Dynamic_Sky::VolumetricCloudLayerScale() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::VolumetricCloudLayerHeight() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::VolumetricCloudCloudTopAltitude() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::VolumetricCloudBaseCloudHeight() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::VolumetricAuroraIntensity() {
    return 0.0;
}

bool AKoratUDS_Ultra_Dynamic_Sky::Using2DClouds() {
    return false;
}

bool AKoratUDS_Ultra_Dynamic_Sky::UseSkyAtmosphere() {
    return false;
}

void AKoratUDS_Ultra_Dynamic_Sky::UpdateVariablesControlledByWeather_Implementation() {
}

void AKoratUDS_Ultra_Dynamic_Sky::UpdateStaticVariables() {
}

void AKoratUDS_Ultra_Dynamic_Sky::UpdateStaticClouds() {
}

void AKoratUDS_Ultra_Dynamic_Sky::UpdateSettingsBasedOnPlatformAndScalability() {
}

void AKoratUDS_Ultra_Dynamic_Sky::UpdateReplicatedToD() {
}

void AKoratUDS_Ultra_Dynamic_Sky::UpdateReplicatedTime() {
}

void AKoratUDS_Ultra_Dynamic_Sky::UpdateOvercastTurbulence() {
}

void AKoratUDS_Ultra_Dynamic_Sky::UpdateMoonParameters() {
}

void AKoratUDS_Ultra_Dynamic_Sky::UpdateLights() {
}

void AKoratUDS_Ultra_Dynamic_Sky::UpdateLensFlare() {
}

void AKoratUDS_Ultra_Dynamic_Sky::UpdateDynamicSkyLightMultiplier() {
}

void AKoratUDS_Ultra_Dynamic_Sky::UpdateDirectionalLights(bool MoveStaticLights) {
}

void AKoratUDS_Ultra_Dynamic_Sky::UpdateCurrentVolumetricCloudsMID() {
}

void AKoratUDS_Ultra_Dynamic_Sky::UpdateActiveVariables() {
}

double AKoratUDS_Ultra_Dynamic_Sky::TwilightBrightnessFalloff(double Z) {
    return 0.0;
}

void AKoratUDS_Ultra_Dynamic_Sky::TransitionTimeOfDay(double NewTimeOfDay, double TransitionDuration_Seconds, TEnumAsByte<EEasingFunc::Type> EasingFunction, double EasingExponent, bool AllowTimeGoingBackwards) {
}

void AKoratUDS_Ultra_Dynamic_Sky::TransitionSkyLightIntensity(double NewSkyLightIntensityMultiplier, double TransitionTime) {
}

double AKoratUDS_Ultra_Dynamic_Sky::TotalTimeElapsed() {
    return 0.0;
}

FLinearColor AKoratUDS_Ultra_Dynamic_Sky::TintColorByWeather(const FLinearColor& ClearColor, const FLinearColor& PartlyCloudyColor, const FLinearColor& OvercastColor) {
    return FLinearColor{};
}

double AKoratUDS_Ultra_Dynamic_Sky::TimeOfDayOffset() {
    return 0.0;
}

void AKoratUDS_Ultra_Dynamic_Sky::TimedOverrideWithNewChanges() {
}

void AKoratUDS_Ultra_Dynamic_Sky::TickTimeTransition() {
}

bool AKoratUDS_Ultra_Dynamic_Sky::TickSetGate(int32 Set) {
    return false;
}

FVector AKoratUDS_Ultra_Dynamic_Sky::SunForwardVector() {
    return FVector{};
}

TSoftObjectPtr<UMaterialInterface> AKoratUDS_Ultra_Dynamic_Sky::StaticCloudsParentMaterial() {
    return NULL;
}

double AKoratUDS_Ultra_Dynamic_Sky::SkyMIDCloudDensity() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::SkyAtmosphereFogContribution() {
    return 0.0;
}

FLinearColor AKoratUDS_Ultra_Dynamic_Sky::SimplifiedCurrentColor(const FLinearColor& DayColor, const FLinearColor& Dawn_DuskColor, const FLinearColor& NightColor) {
    return FLinearColor{};
}

void AKoratUDS_Ultra_Dynamic_Sky::SetUpOvercastTurbulence() {
}

void AKoratUDS_Ultra_Dynamic_Sky::SetUpLensFlare() {
}

void AKoratUDS_Ultra_Dynamic_Sky::SetTimeOfDayUsingTimeCode(const FTimecode& Timecode) {
}

void AKoratUDS_Ultra_Dynamic_Sky::SetSunAndMoonRootRotation() {
}

void AKoratUDS_Ultra_Dynamic_Sky::SetDateAndTime(const FDateTime& DateTime) {
}

void AKoratUDS_Ultra_Dynamic_Sky::SetCloudTiming() {
}

double AKoratUDS_Ultra_Dynamic_Sky::ScaleSampleCount(double In) {
    return 0.0;
}

void AKoratUDS_Ultra_Dynamic_Sky::RestartInsideCloudFog() {
}

void AKoratUDS_Ultra_Dynamic_Sky::RecaptureSkyLight() {
}

void AKoratUDS_Ultra_Dynamic_Sky::QueryProjectSettings() {
}

FLinearColor AKoratUDS_Ultra_Dynamic_Sky::OvercastLightContribution(bool ForVolumetricClouds) {
    return FLinearColor{};
}

void AKoratUDS_Ultra_Dynamic_Sky::OnRep_ReplicatedTimeOfDay() {
}

double AKoratUDS_Ultra_Dynamic_Sky::NightFilter() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::MoonPhaseMultiplier() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::MoonLightVolumetricScatteringIntensity() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::MoonLightSpecularScale() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::MoonLightCurrentIntensity() {
    return 0.0;
}

void AKoratUDS_Ultra_Dynamic_Sky::LoadRequiredAssets() {
}

TSoftObjectPtr<UMaterialInterface> AKoratUDS_Ultra_Dynamic_Sky::LensFlareParentMaterial() {
    return NULL;
}

bool AKoratUDS_Ultra_Dynamic_Sky::IsSunLightCastingShadows() {
    return false;
}

bool AKoratUDS_Ultra_Dynamic_Sky::IsMoonLightCastingShadows() {
    return false;
}

bool AKoratUDS_Ultra_Dynamic_Sky::IsLocationInsideCloudLayer(const FVector& Location) {
    return false;
}

void AKoratUDS_Ultra_Dynamic_Sky::IncrementDay() {
}

double AKoratUDS_Ultra_Dynamic_Sky::H_M_S_MSToTimeOfDay(int32 Hours, int32 Minutes, int32 Seconds, int32 Miliseconds) {
    return 0.0;
}

void AKoratUDS_Ultra_Dynamic_Sky::GetVolumetricCloudEmissiveColors(FLinearColor& outBottom, FLinearColor& outTop) {
}

FTimecode AKoratUDS_Ultra_Dynamic_Sky::GetTimeOfDayInRealTimeFormat() {
    return FTimecode{};
}

TSoftObjectPtr<UMaterialInterface> AKoratUDS_Ultra_Dynamic_Sky::GetSkyMIDParentMaterialInstance() {
    return NULL;
}

void AKoratUDS_Ultra_Dynamic_Sky::GetCurrentVolumetricCloudExtinctionScales(double& outTop, double& outBottom) {
}

void AKoratUDS_Ultra_Dynamic_Sky::GetCurrentSkyLightColorAndIntensity(double& outIntensity, FLinearColor& OutColor) {
}

void AKoratUDS_Ultra_Dynamic_Sky::GetCurrentFogBaseColors(FLinearColor& outAmbientFogColor, FLinearColor& outDirectionalBaseColor, FLinearColor& outScaledDirectionalBaseColor) {
}

FDateTime AKoratUDS_Ultra_Dynamic_Sky::GetCurrentDateAndTime() {
    return FDateTime{};
}

void AKoratUDS_Ultra_Dynamic_Sky::GetCurrentCloudShadowsIntensityAndSoftness(double& outIntensity, double& outSoftness) {
}

void AKoratUDS_Ultra_Dynamic_Sky::ForceValidDay() {
}

double AKoratUDS_Ultra_Dynamic_Sky::FogStartDistance() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::FogHeightFalloff() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::FlatCloudinessAlpha() {
    return 0.0;
}

void AKoratUDS_Ultra_Dynamic_Sky::FireEditorDispatchers() {
}

void AKoratUDS_Ultra_Dynamic_Sky::FinishTimeTransition() {
}

void AKoratUDS_Ultra_Dynamic_Sky::FindRealSunset_SunriseTimes() {
}

double AKoratUDS_Ultra_Dynamic_Sky::FindOverallIntensity(double Darkening) {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::DirectionalLightDimming() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::DirectionalInscatteringMultiplier() {
    return 0.0;
}

bool AKoratUDS_Ultra_Dynamic_Sky::DimmingDirectionalLights() {
    return false;
}

void AKoratUDS_Ultra_Dynamic_Sky::DayEnded() {
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentZDisturbance() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentWispsOpacity() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentVolumetricCloudTaperPosition() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentVolumetricCloudSubnoiseAmount() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentVolumetricCloudsDensity() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentVolumetricCloudMultiscatteringOcclusion() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentVolumetricCloudMacroVariation() {
    return 0.0;
}

FLinearColor AKoratUDS_Ultra_Dynamic_Sky::CurrentVolumetricCloudAlbedo() {
    return FLinearColor{};
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentSunSourceAngle() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentSunsetEventTime() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentSunriseEventTime() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentSunRadius() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentSunLightIntensity() {
    return 0.0;
}

FLinearColor AKoratUDS_Ultra_Dynamic_Sky::CurrentSunLightColor() {
    return FLinearColor{};
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentSunDiskIntensity() {
    return 0.0;
}

FLinearColor AKoratUDS_Ultra_Dynamic_Sky::CurrentSunDiskColor() {
    return FLinearColor{};
}

FLinearColor AKoratUDS_Ultra_Dynamic_Sky::CurrentStarsColor() {
    return FLinearColor{};
}

FLinearColor AKoratUDS_Ultra_Dynamic_Sky::CurrentSkyLightLowerHemisphereColor() {
    return FLinearColor{};
}

FLinearColor AKoratUDS_Ultra_Dynamic_Sky::CurrentSkyAmbientColor() {
    return FLinearColor{};
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentSaturation() {
    return 0.0;
}

FLinearColor AKoratUDS_Ultra_Dynamic_Sky::CurrentRayleighScatteringColor() {
    return FLinearColor{};
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentOvercastSwirl() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentOverallIntensity() {
    return 0.0;
}

FLinearColor AKoratUDS_Ultra_Dynamic_Sky::CurrentNightSkyGlow() {
    return FLinearColor{};
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentMoonSourceAngle() {
    return 0.0;
}

void AKoratUDS_Ultra_Dynamic_Sky::CurrentMoonScaleAndCutoutValue(double& outScale, double& outCutout) {
}

FLinearColor AKoratUDS_Ultra_Dynamic_Sky::CurrentMoonPhaseAngle() {
    return FLinearColor{};
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentMoonMaterialIntensity() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentMoonLitPercent() {
    return 0.0;
}

FLinearColor AKoratUDS_Ultra_Dynamic_Sky::CurrentMoonLightMaterialColor() {
    return FLinearColor{};
}

FLinearColor AKoratUDS_Ultra_Dynamic_Sky::CurrentMoonLightColor() {
    return FLinearColor{};
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentMieScatteringScale() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentMieAnisotropy() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentMaxTraceDistance() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentLitIntensity() {
    return 0.0;
}

FLinearColor AKoratUDS_Ultra_Dynamic_Sky::CurrentLightPollution() {
    return FLinearColor{};
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentLerpToSimplifiedClouds() {
    return 0.0;
}

FLinearColor AKoratUDS_Ultra_Dynamic_Sky::CurrentLensFlareColor() {
    return FLinearColor{};
}

FLinearColor AKoratUDS_Ultra_Dynamic_Sky::CurrentFogInscatteringColor() {
    return FLinearColor{};
}

FLinearColor AKoratUDS_Ultra_Dynamic_Sky::CurrentFogDirectionalInscatteringColor() {
    return FLinearColor{};
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentFogDensity() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::CurrentBaseCloudsScale() {
    return 0.0;
}

void AKoratUDS_Ultra_Dynamic_Sky::CurrentAppliedCloudTopAndBottom(double& outBottom, double& outTop) {
}

FLinearColor AKoratUDS_Ultra_Dynamic_Sky::Current2DCloudTint() {
    return FLinearColor{};
}

FTimecode AKoratUDS_Ultra_Dynamic_Sky::ConvertTimeOfDayToTimeCode(double Time) {
    return FTimecode{};
}

void AKoratUDS_Ultra_Dynamic_Sky::ConstructionScriptFunction(bool RunByCounterpart, bool MoveStaticLights) {
}

FVector AKoratUDS_Ultra_Dynamic_Sky::CloudTextureVelocity() {
    return FVector{};
}

double AKoratUDS_Ultra_Dynamic_Sky::CloudsTimeOfDayFactor() {
    return 0.0;
}

TSoftObjectPtr<UMaterialInterface> AKoratUDS_Ultra_Dynamic_Sky::CloudShadowsParentMaterial() {
    return NULL;
}

FLinearColor AKoratUDS_Ultra_Dynamic_Sky::CloudShadowsLightVectorProcess(const FVector& Vector) {
    return FLinearColor{};
}

double AKoratUDS_Ultra_Dynamic_Sky::CloudShadowsCloudDensity() {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::CloudDarkening() {
    return 0.0;
}

bool AKoratUDS_Ultra_Dynamic_Sky::CloudCoverageHasChanged() {
    return false;
}

void AKoratUDS_Ultra_Dynamic_Sky::CheckForDaylightSavingsTime() {
}

double AKoratUDS_Ultra_Dynamic_Sky::CancelShadowsValue(const FVector& LightVector) {
    return 0.0;
}

double AKoratUDS_Ultra_Dynamic_Sky::CalculateNightBrightness() {
    return 0.0;
}

void AKoratUDS_Ultra_Dynamic_Sky::ApproximateRealSunMoonAndStars(int32 Month_, int32 Day_, int32 Year_, double TimeOfDay_, double TimeZone_, bool OnlyCalculateSun, FVector& outSunVector, FVector& outMoonVector, double& outRealPhase, FVector& outPhaseAlignment, double& outCelestialOrbit, FLinearColor& outCelestialYaw) {
}

void AKoratUDS_Ultra_Dynamic_Sky::ApplyVolumetricMode(EKoratUDS_UDS_VolRT_Mode Mode) {
}

void AKoratUDS_Ultra_Dynamic_Sky::ApplyConsoleVariableWithCheck(const FString& Cvar, double setting, int32 Type) {
}

TArray<UMaterialInstanceDynamic*> AKoratUDS_Ultra_Dynamic_Sky::AllVolumetricCloudMIDs(bool Shadows) {
    return TArray<UMaterialInstanceDynamic*>();
}

void AKoratUDS_Ultra_Dynamic_Sky::AdjustedExposureRange(double& outMin, double& outMax) {
}

FLinearColor AKoratUDS_Ultra_Dynamic_Sky::AdjustColorForNightBrightness(const FLinearColor& InColor) {
    return FLinearColor{};
}

double AKoratUDS_Ultra_Dynamic_Sky::AbsentDirectionalLightsBrightness() {
    return 0.0;
}

void AKoratUDS_Ultra_Dynamic_Sky::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AKoratUDS_Ultra_Dynamic_Sky, AnimateTimeOfDay);
    DOREPLIFETIME(AKoratUDS_Ultra_Dynamic_Sky, CloudsPosition);
    DOREPLIFETIME(AKoratUDS_Ultra_Dynamic_Sky, TransitioningTime);
    DOREPLIFETIME(AKoratUDS_Ultra_Dynamic_Sky, Year);
    DOREPLIFETIME(AKoratUDS_Ultra_Dynamic_Sky, Month);
    DOREPLIFETIME(AKoratUDS_Ultra_Dynamic_Sky, Day);
    DOREPLIFETIME(AKoratUDS_Ultra_Dynamic_Sky, ReplicatedTimeOfDay);
    DOREPLIFETIME(AKoratUDS_Ultra_Dynamic_Sky, ReplicatedMoonPhase);
    DOREPLIFETIME(AKoratUDS_Ultra_Dynamic_Sky, ReplicatedDayLength);
    DOREPLIFETIME(AKoratUDS_Ultra_Dynamic_Sky, ReplicatedNightLength);
    DOREPLIFETIME(AKoratUDS_Ultra_Dynamic_Sky, ReplicatedTimeSpeed);
    DOREPLIFETIME(AKoratUDS_Ultra_Dynamic_Sky, ReplicatedSimulationSpeed);
}


