#include "UltraDynamicSkyParam_FogDensity_Curve.h"

FUltraDynamicSkyParam_FogDensity_Curve::FUltraDynamicSkyParam_FogDensity_Curve() {
    this->BaseFogDensity = NULL;
    this->FoggyDensityContribution = NULL;
    this->CloudyDensityContribution = NULL;
    this->DustDensityContribution = NULL;
    this->ScaleTotalFogDensity = NULL;
    this->FogStartDistanceWhenClear = NULL;
    this->FogDensityWhereStartDistanceReachesZero = NULL;
    this->BaseHeightFogFalloff = NULL;
    this->CloudyHeightFogFalloff = NULL;
    this->FoggyHeightFogFalloff = NULL;
    this->DustyHeightFogFalloff = NULL;
}

