#include "UltraDynamicSkyParam_2D_DynamicClouds.h"

FUltraDynamicSkyParam_2D_DynamicClouds::FUltraDynamicSkyParam_2D_DynamicClouds() {
    this->SoftenCloudLayer1 = 0.00f;
    this->SoftenCloudLayer2 = 0.00f;
    this->SharpenOuterEdge = 0.00f;
    this->CloudTilingLayer1 = 0.00f;
    this->CloudTilingLayer2 = 0.00f;
    this->SoftenHorizon = 0.00f;
    this->bOneCloudLayer = false;
    this->CloudHeightLayer1 = 0.00f;
    this->CloudHeightLayer2 = 0.00f;
    this->OvercastSwirlingTexture = 0.00f;
    this->SunShaderIntensity = 0.00f;
    this->DirectionalLightingIntensity = 0.00f;
    this->SunHighlightRadius = 0.00f;
    this->CloudOpacity = 0.00f;
    this->HorizonDensityMultiplier = 0.00f;
    this->ZenithDensityMultiplier = 0.00f;
    this->LatitudeGradientPosition = 0.00f;
    this->LatitudeGradientWidth = 0.00f;
    this->AroundSunDensityMultiplier = 0.00f;
    this->AroundSunDensityExponent = 0.00f;
    this->AroundMoonDensityMultiplier = 0.00f;
    this->AroundMoonDensityExponent = 0.00f;
    this->OvercastSwirlContrastOrigin = 0.00f;
    this->OvercastSwirlContrastScale = 0.00f;
}

