#include "KoratMovieSceneBattleSubtitlePayload.h"

FKoratMovieSceneBattleSubtitlePayload::FKoratMovieSceneBattleSubtitlePayload() {
    this->TargetType = EKoratMovieSceneBattleSubtitleTargetType::Myself;
    this->IsBattleVoice = false;
    this->bFateBranchType = false;
}

