#include "KoratMovieSceneBattleSubtitleSectionData.h"

FKoratMovieSceneBattleSubtitleSectionData::FKoratMovieSceneBattleSubtitleSectionData() {
}

void FKoratMovieSceneBattleSubtitleSectionData::AddKey(const FFrameNumber& InTime, const FKoratMovieSceneBattleSubtitlePayload& InPayload)
{
    Times.Add(InTime);
    KeyValues.Add(InPayload);
}


