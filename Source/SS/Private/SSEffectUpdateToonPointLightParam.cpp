#include "SSEffectUpdateToonPointLightParam.h"

FSSEffectUpdateToonPointLightParam::FSSEffectUpdateToonPointLightParam() {
    this->GroupType = EKoratEffectToonPointLightGroupType::None;
    this->TargetType = EKoratEffectToonPointLightTargetType::Everyone;
    this->Priority = 0;
    this->Intensity = 0.00f;
    this->ForceDisableDynamicShadows = 0.00f;
    this->FrequencyValue = 0.00f;
    this->WiggleStrength = 0.00f;
    this->EaseStrength = 0.00f;
    this->BaseLightWeight = 0.00f;
    this->BaseShadowWeight = 0.00f;
    this->bDisableWiggle = false;
    this->EvaluationSpace = ESSLightingPositonMethod::ActorLocation;
    this->bHasEvaluationSpaceTrack = false;
    this->bCheckOwnerVisibility = false;
}

