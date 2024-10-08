#include "MovieSceneLipSyncAtomSection.h"

UMovieSceneLipSyncAtomSection::UMovieSceneLipSyncAtomSection() {
    this->Sound = NULL;
    this->bOverrideAtomLipSyncSectionParameterSettings = false;
    this->AtomLipSyncSectionParameterSettings = NULL;
    this->bOverrideAttenuation = false;
    this->AttenuationSettings = NULL;
}

void UMovieSceneLipSyncAtomSection::SetStartOffset(FFrameNumber InStartOffset) {
}

FFrameNumber UMovieSceneLipSyncAtomSection::GetStartOffset() const {
    return FFrameNumber{};
}


