#include "SoundAtomCue.h"

USoundAtomCue::USoundAtomCue() {
    this->CueSheet = NULL;
    this->LoopSetting = EAtomLoopSetting::Inherited;
    this->bApplyAtomParameter = false;
    this->Duration = 0.00f;
    this->FirstWaveDuration = 0.00f;
    this->AttenuationSettings = NULL;
    this->bEnableAudioVolume = false;
    this->bIsMovable = false;
    this->bCanStraddleAudioVolume = false;
    this->bUseDistanceToEnableAudioVolume = false;
    this->MinDistanceToEnableAudioVolume = 0.00f;
    this->bUseAreaSoundVolume = false;
    this->UpdateRateForFrame = 1;
    this->Region = NULL;
    this->bIsEnableChangingAisacValueWithComponentVelocity = false;
    this->bEconomicTick = false;
    this->bOverrideEconomicTickSettings = false;
    this->EconomicTickDistanceMargin = 8796093022208.00f;
    this->EconomicTickFrequency = 15;
    this->bEnableDistanceCulling = false;
    this->bOverrideCullSettings = false;
    this->CullDistanceMargin = 8796093022208.00f;
    this->EconomicTickMarginDistance = 0.00f;
    this->bLoopSettingByAtomCraft = false;
    this->bCullingSoundPlayingProcessByDistance = false;
    this->bUseLegacyCullingSettings = false;
    this->MaxProcessDistance = 0.00f;
    this->bOverrideCullingSettings = false;
    this->CullingMarginDistance = 0.00f;
    this->bLoop = false;
    this->DefaultAttenuation = NULL;
}

bool USoundAtomCue::Validate() const {
    return false;
}

bool USoundAtomCue::IsLooping() const {
    return false;
}

bool USoundAtomCue::IsEconomicTickEnabled() const {
    return false;
}

float USoundAtomCue::GetMaxAttenuationDistanceToUse() const {
    return 0.0f;
}

float USoundAtomCue::GetMaxAttenuationDistanceToApply() const {
    return 0.0f;
}

float USoundAtomCue::GetEconomicTickMarginDistanceToUse() const {
    return 0.0f;
}

float USoundAtomCue::GetEconomicTickFrequencyToUse() const {
    return 0.0f;
}

float USoundAtomCue::GetEconomicTickFrequencyToApply() const {
    return 0.0f;
}

float USoundAtomCue::GetEconomicTickDistanceMarginToApply() const {
    return 0.0f;
}

float USoundAtomCue::GetEconomicTickDistance() const {
    return 0.0f;
}

float USoundAtomCue::GetEconomicTickBoundaryDistanceToUse() const {
    return 0.0f;
}

float USoundAtomCue::GetCullingMarginDistanceToUse() const {
    return 0.0f;
}

float USoundAtomCue::GetCullingBoundaryDistanceToUse() const {
    return 0.0f;
}

float USoundAtomCue::GetCullDistanceMarginToApply() const {
    return 0.0f;
}

float USoundAtomCue::GetCullDistance() const {
    return 0.0f;
}

bool USoundAtomCue::BP_GetCueInfo(FAtomCueInfo& CueInfo) const {
    return false;
}


