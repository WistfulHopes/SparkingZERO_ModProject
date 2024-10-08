#include "SSEffectAnimNotify.h"

USSEffectAnimNotify::USSEffectAnimNotify() {
    this->EffectActor = NULL;
    this->PlayMode = ESSEffectPlayMode::None;
    this->bAttached = false;
    this->InRotationBase = ESSEffectAnimNotifyRotationBase::CharaFront;
}


