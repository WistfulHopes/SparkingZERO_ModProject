#include "KoratMovieSceneUIActionBlendOptionKeyStruct.h"

FKoratMovieSceneUIActionBlendOptionKeyStruct::FKoratMovieSceneUIActionBlendOptionKeyStruct() {
    this->OverrideBlendIn = false;
    this->BlendInBlendTime = 0.00f;
    this->BlendInBlendOption = EAlphaBlendOption::Linear;
    this->BlendInCustomCurve = NULL;
    this->OverrideBlendOut = false;
    this->BlendOutBlendTime = 0.00f;
    this->BlendOutBlendOption = EAlphaBlendOption::Linear;
    this->BlendOutCustomCurve = NULL;
    this->BlendOutTriggerTime = 0.00f;
    this->EnableAutoBlendOut = false;
}

