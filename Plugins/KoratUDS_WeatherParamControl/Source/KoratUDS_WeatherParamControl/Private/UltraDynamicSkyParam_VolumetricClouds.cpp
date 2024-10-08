#include "UltraDynamicSkyParam_VolumetricClouds.h"

FUltraDynamicSkyParam_VolumetricClouds::FUltraDynamicSkyParam_VolumetricClouds() {
    this->BottomAltitude = 0.00f;
    this->LayerHeightScale = 0.00f;
    this->BaseCloudsScale = 0.00f;
    this->SubNoiceScale = 0.00f;
    this->HighFrequencyNoiseAmount = 0.00f;
    this->ExtinctionScaleTop = 0.00f;
    this->ExtinctionScaleBottom = 0.00f;
    this->ShiftCurve = 0.00f;
    this->MinimumErosion = 0.00f;
    this->ViewSampleCountScale = 0.00f;
    this->ShadowSampleScale = 0.00f;
    this->ShadowTracingDistance = 0.00f;
    this->BaseCloudsMipLevel = 0.00f;
    this->MacroVariation = 0.00f;
    this->MacroScale = 0.00f;
    this->VolumetricCloudScale = 0.00f;
    this->bEnableFogInsideClouds = false;
    this->bTwoLayers = false;
    this->Layer2CoverageScale = 0.00f;
    this->Layer2ExtinctionScale = 0.00f;
    this->Layer2MipOffset = 0.00f;
    this->DistanceBetweenLayers = 0.00f;
    this->ReflectionSampleCountScale = 0.00f;
    this->ReflectionShadowSampleCountScale = 0.00f;
    this->MultiscatteringIntensity = 0.00f;
    this->MultiscatteringOcclusionFactor = 0.00f;
    this->SubNoiseErosion = 0.00f;
    this->PhaseG = 0.00f;
    this->PhaseG2 = 0.00f;
    this->MultiscatteringEccentricity = 0.00f;
    this->DistanceToSampleMaxCount = 0.00f;
    this->TracingMaxStartDistance = 0.00f;
    this->TracingMaxDistance_InsideCloudLayer = 0.00f;
    this->TracingMaxDistance_OutsideCloudLayer = 0.00f;
    this->bChangeToSimplifiedMaterialWhenOvercast = false;
    this->SimplifiedMaterialCloudCoverageThreshold = 0.00f;
    this->SimplifiedMaterialFadeLength = 0.00f;
    this->DistortHighFrequencyNoise = 0.00f;
    this->ZDisturbance = 0.00f;
    this->InsideCloudFogStrength = 0.00f;
    this->OvercastTurbulence = 0.00f;
    this->CloseFadeDistance = 0.00f;
}

