#include "KoratMovieSceneAttachKeyStruct.h"

FKoratMovieSceneAttachKeyStruct::FKoratMovieSceneAttachKeyStruct() {
    this->PositionReference = FMovieSceneActorReferenceKey();
    this->RotationReference = FMovieSceneActorReferenceKey();
    this->PositionFirstSocketName = TEXT("NULL");
    this->PositionSecondSocketName = TEXT("NULL");
    this->RotationFirstSocketName = TEXT("NULL");
    this->RotationSecondSocketName = TEXT("NULL");
    this->PositionBlendRate = 0.00f;
    this->RotationBlendRate = 0.00f;
    this->PositionFollowing = false;
    this->RotationFollowing = false;
    this->Time = 0;
}

