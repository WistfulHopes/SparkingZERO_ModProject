#include "MovieSceneManaSection.h"

UMovieSceneManaSection::UMovieSceneManaSection() {
    this->ManaSource = NULL;
    this->bLooping = false;
    this->ManaTexture = NULL;
    this->AtomComponent = NULL;
    this->bUseExternalManaPlayer = false;
    this->ExternalManaPlayer = NULL;
}


