#include "SSOutlineDataAsset.h"

USSOutlineDataAsset::USSOutlineDataAsset() {
    this->FillRate = 1.00f;
    this->bFillRateEnable = false;
    this->bUse = true;
    this->bUseEnable = true;
    this->bOptionalVisibility = false;
    this->bOptionalVisibilityEnable = true;
    this->BlendAmount = 100.00f;
    this->bBlendAmountEnable = true;
    this->Brightness = 10.00f;
    this->bBrightnessEnable = true;
    this->bColorEnable = true;
    this->Thickness = 4.00f;
    this->bThicknessEnable = true;
    this->bColorMapEnable = true;
    this->NoiseContrast = 5.00f;
    this->bNoiseContrastEnable = true;
}


