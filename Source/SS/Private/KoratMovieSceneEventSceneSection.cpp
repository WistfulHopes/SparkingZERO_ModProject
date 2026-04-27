#include "KoratMovieSceneEventSceneSection.h"
#include "KoratMovieSceneEventScenePayload.h"
#include "EKoratMovieSceneEventSceneTriggerType.h"
#include "EKoratMovieSceneEventSceneSpeakerType.h"

UKoratMovieSceneEventSceneSection::UKoratMovieSceneEventSceneSection() 
{
    bSupportsInfiniteRange = true;

    FKoratMovieSceneEventScenePayload DefaultPayload;

    DefaultPayload.TriggerType = EKoratMovieSceneEventSceneTriggerType::Default;
    DefaultPayload.MinimumDisplayTimeSeconds = 0.00f;
    DefaultPayload.bNarration = false;
    DefaultPayload.EKoratMovieSceneEventSceneSpeakerType::RebindEvent00;
    DefaultPayload.bHiddenSpeakerName = false;
    DefaultPayload.bOverrideSpeakerName = false;

    // Add a default keyframe at time 0 (ticks = 0)
    FFrameNumber DefaultTime = FFrameNumber(0);
    EventData.AddKey(DefaultTime, DefaultPayload);

    // Set the range of frames (this could be dynamically changed later)
    SetRange(TRange<FFrameNumber>::All());
}

