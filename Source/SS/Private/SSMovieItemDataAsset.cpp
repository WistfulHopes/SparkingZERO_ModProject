#include "SSMovieItemDataAsset.h"

USSMovieItemDataAsset::USSMovieItemDataAsset() {
    this->bIsDefaultUnlocked = false;
    this->SESoundCueID = -1;
    this->VoiceSoundCueID = -1;
    this->MovieSoundCategory = ESSMovieSoundCategory::None;
    this->MovieSubtitleDataAsset = NULL;
    this->SortIndex = 0;
}


