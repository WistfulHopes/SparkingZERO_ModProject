#include "KoratMovieSceneEventScenePayload.h"

FKoratMovieSceneEventScenePayload::FKoratMovieSceneEventScenePayload() {
    this->TriggerType = EKoratMovieSceneEventSceneTriggerType::Default;
    this->MinimumDisplayTimeSeconds = 0.00f;
    this->bNarration = false;
    this->SpeakerType = EKoratMovieSceneEventSceneSpeakerType::RebindEvent00;
    this->bHiddenSpeakerName = false;
    this->bOverrideSpeakerName = false;
}

