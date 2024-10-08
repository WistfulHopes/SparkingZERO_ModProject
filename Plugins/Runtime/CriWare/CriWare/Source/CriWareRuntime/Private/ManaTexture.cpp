#include "ManaTexture.h"

UManaTexture::UManaTexture() {
    this->MovieSource = NULL;
    this->bRenderToTexture = false;
    this->TargetGamma = 0.00f;
    this->bHDR = false;
    this->AddressX = TA_Clamp;
    this->AddressY = TA_Clamp;
    this->bOverrideDimensions = false;
    this->OverrideFormat = PF_Unknown;
}

void UManaTexture::SetMovieSource(UManaSource* InSource) {
}


