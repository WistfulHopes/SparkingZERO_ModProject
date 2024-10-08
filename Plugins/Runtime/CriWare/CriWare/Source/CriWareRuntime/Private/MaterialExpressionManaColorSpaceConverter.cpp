#include "MaterialExpressionManaColorSpaceConverter.h"

UMaterialExpressionManaColorSpaceConverter::UMaterialExpressionManaColorSpaceConverter() {
    this->bH264 = false;
    this->MovieType = EManaMovieType::Unknown;
    this->ColorSpace = EManaColorSpace::Rec601;
    this->bUseGammaExponent = false;
    this->ConstGamma = 2.20f;
}


