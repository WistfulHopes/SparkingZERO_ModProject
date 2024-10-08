#include "MovieSceneAtomSection.h"

UMovieSceneAtomSection::UMovieSceneAtomSection() {
    this->Sound = NULL;
    this->bSuppressSubtitles = false;
    this->bOverrideAttenuation = false;
    this->AttenuationSettings = NULL;
    this->bContinueSoundWhenSequenceIsEnd = false;
    this->bLooping = false;
}

void UMovieSceneAtomSection::SetStartOffset(FFrameNumber InStartOffset) {
}

bool UMovieSceneAtomSection::IsLooping() const {
    return false;
}

FFrameNumber UMovieSceneAtomSection::GetStartOffset() const {
    return FFrameNumber{};
}


