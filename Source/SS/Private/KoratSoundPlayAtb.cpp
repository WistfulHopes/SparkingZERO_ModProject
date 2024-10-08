#include "KoratSoundPlayAtb.h"

FKoratSoundPlayAtb::FKoratSoundPlayAtb() {
    this->AttachToComponent = NULL;
    this->Volume = 0.00f;
    this->StartTime = 0.00f;
    this->FadeInTime = 0.00f;
    this->FadeOutTime = 0.00f;
    this->IsCrossFade = false;
    this->IsVibration = false;
    this->EnableSlowPlaySpeed = false;
    this->ControllerVibrationType = EKoratVibrationControllerType::None;
}

