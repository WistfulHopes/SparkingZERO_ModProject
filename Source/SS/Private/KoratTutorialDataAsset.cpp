#include "KoratTutorialDataAsset.h"

UKoratTutorialDataAsset::UKoratTutorialDataAsset() {
    this->FadeDulation = 0.50f;
    this->SpeedImpactTimeDilation = 0.25f;
    this->bInputCancelSpeedImpactTimeDilation = true;
    this->PostSpeedImpactUkemiDistance = 0.00f;
    this->DialogCooltimeSec = 10.00f;
    this->bNotPlayDialogInDamageReaction = false;
}

float UKoratTutorialDataAsset::GetSpeedImpactTimeDilation() const {
    return 0.0f;
}

bool UKoratTutorialDataAsset::GetInputCancelSpeedImpactTimeDilation() const {
    return false;
}


