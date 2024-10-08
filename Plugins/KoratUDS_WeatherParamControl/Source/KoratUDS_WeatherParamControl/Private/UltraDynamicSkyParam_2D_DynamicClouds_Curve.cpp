#include "UltraDynamicSkyParam_2D_DynamicClouds_Curve.h"

FUltraDynamicSkyParam_2D_DynamicClouds_Curve::FUltraDynamicSkyParam_2D_DynamicClouds_Curve() {
    this->SoftenCloudLayer1 = NULL;
    this->SoftenCloudLayer2 = NULL;
    this->SharpenOuterEdge = NULL;
    this->CloudTilingLayer1 = NULL;
    this->CloudTilingLayer2 = NULL;
    this->SoftenHorizon = NULL;
    this->OneCloudLayer = NULL;
    this->CloudHeightLayer1 = NULL;
    this->CloudHeightLayer2 = NULL;
    this->OvercastSwirlingTexture = NULL;
    this->SunShaderIntensity = NULL;
    this->DirectionalLightingIntensity = NULL;
    this->SunHighlightRadius = NULL;
    this->CloudOpacity = NULL;
    this->HorizonDensityMultiplier = NULL;
    this->ZenithDensityMultiplier = NULL;
    this->LatitudeGradientPosition = NULL;
    this->LatitudeGradientWidth = NULL;
    this->AroundSunDensityMultiplier = NULL;
    this->AroundSunDensityExponent = NULL;
    this->AroundMoonDensityMultiplier = NULL;
    this->AroundMoonDensityExponent = NULL;
    this->OvercastSwirlContrastOrigin = NULL;
    this->OvercastSwirlContrastScale = NULL;
}

