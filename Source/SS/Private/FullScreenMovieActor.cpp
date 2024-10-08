#include "FullScreenMovieActor.h"

AFullScreenMovieActor::AFullScreenMovieActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ManaSourceNo = 0;
    this->MovieMode = EMovieMode::EMovieModeNon;
    this->MovieModeBackup = EMovieMode::EMovieModeNon;
}


