#include "KoratMovieSceneBattleSubtitleTrack.h"

UKoratMovieSceneBattleSubtitleTrack::UKoratMovieSceneBattleSubtitleTrack() {
    this->bFireEventsWhenForwards = true;
    this->bFireEventsWhenBackwards = true;
    this->EventPosition = EFireEventsAtPosition::AtEndOfEvaluation;
}


