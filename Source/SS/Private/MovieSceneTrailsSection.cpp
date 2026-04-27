#include "MovieSceneTrailsSection.h"

UMovieSceneTrailsSection::UMovieSceneTrailsSection() {
    bSupportsInfiniteRange = true;

    this->WidthScaleMode = ETrailWidthMode_FromCentre;
    this->WidthScaleScalar = 1.00f;
}
