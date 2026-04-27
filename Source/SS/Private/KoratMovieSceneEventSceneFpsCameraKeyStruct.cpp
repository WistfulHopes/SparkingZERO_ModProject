#include "KoratMovieSceneEventSceneFpsCameraKeyStruct.h"

FKoratMovieSceneEventSceneFpsCameraKeyStruct::FKoratMovieSceneEventSceneFpsCameraKeyStruct() {
    this->LookAtReference = FMovieSceneActorReferenceKey();
    this->bEnable = false;
    this->Alpha = 0.00f;
}

