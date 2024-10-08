#include "KoratMovieSceneSoundSceneSection.h"

UKoratMovieSceneSoundSceneSection::UKoratMovieSceneSoundSceneSection() {
    this->SoundCueID = -1;
    this->SoundGroupType = ESSSoundGroupType::UI;
    this->bStopSoundEndPlay = false;
    this->Volume = 100.00f;
    this->TickEvenWhenPaused = false;
}

void UKoratMovieSceneSoundSceneSection::AddControlTypeParameterKey(FName InParameterName, FFrameNumber InTime, EKoratSequenceSoundControlType InValue) {
}


