#include "KoratMovieSceneLookAtKeyStruct.h"

FKoratMovieSceneLookAtKeyStruct::FKoratMovieSceneLookAtKeyStruct() {
    this->PartFlags = EKoratMovieSceneLookAtPartFlags::None;
    this->bEnable = false;
    this->bUpdate = false;
    this->Alpha = 0.00f;
    this->bEnableOverrideBlendTime = false;
    this->OverrideBlendTime = 0.00f;
}

