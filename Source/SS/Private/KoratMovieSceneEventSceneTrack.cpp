#include "KoratMovieSceneEventSceneTrack.h"

UKoratMovieSceneEventSceneTrack::UKoratMovieSceneEventSceneTrack() {
    this->bFireEventsWhenForwards = true;
    this->bFireEventsWhenBackwards = true;
    this->EventPosition = EFireEventsAtPosition::AtEndOfEvaluation;
}


