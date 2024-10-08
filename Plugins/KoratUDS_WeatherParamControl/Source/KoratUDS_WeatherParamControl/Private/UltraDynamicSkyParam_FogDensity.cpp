#include "UltraDynamicSkyParam_FogDensity.h"

FUltraDynamicSkyParam_FogDensity::FUltraDynamicSkyParam_FogDensity() {
    this->BaseFogDensity = 0.00f;
    this->FoggyDensityContribution = 0.00f;
    this->CloudyDensityContribution = 0.00f;
    this->DustDensityContribution = 0.00f;
    this->ScaleTotalFogDensity = 0.00f;
    this->FogStartDistanceWhenClear = 0.00f;
    this->FogDensityWhereStartDistanceReachesZero = 0.00f;
    this->BaseHeightFogFalloff = 0.00f;
    this->CloudyHeightFogFalloff = 0.00f;
    this->FoggyHeightFogFalloff = 0.00f;
    this->DustyHeightFogFalloff = 0.00f;
}

