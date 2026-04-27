#include "KoratMovieSceneLookAtKeyStruct.h"

FKoratMovieSceneLookAtKeyStruct::FKoratMovieSceneLookAtKeyStruct() {
    this->PartFlags = EKoratMovieSceneLookAtPartFlags::None;
    this->bEnable = false;
    this->bUpdate = false;
    this->Alpha = 0.00f;
    this->bEnableOverrideBlendTime = false;
    this->OverrideBlendTime = 0.00f;
    this->Target1stReference = FMovieSceneActorReferenceKey();
    this->Target2ndReference = FMovieSceneActorReferenceKey();
    this->Target1stSocketName = TEXT("");
    this->Target2ndSocketName = TEXT("");
    this->Time = FFrameNumber(0);
}

