#include "SSShakeForceLastParameter.h"

FSSShakeForceLastParameter::FSSShakeForceLastParameter() {
    this->Baked = false;
    this->ShakeTargetType = EShakeTargetType::Player;
    this->ShakeForceType = EShakeForceType::None;
    this->AttachParentActor = false;
}

