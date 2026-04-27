#include "KoratMovieSceneEventSceneSectionData.h"

FKoratMovieSceneEventSceneSectionData::FKoratMovieSceneEventSceneSectionData() {
}

void FKoratMovieSceneEventSceneSectionData::AddKey(const FFrameNumber& InTime, const FKoratMovieSceneEventScenePayload& InPayload)
{
    Times.Add(InTime);
    KeyValues.Add(InPayload);
}