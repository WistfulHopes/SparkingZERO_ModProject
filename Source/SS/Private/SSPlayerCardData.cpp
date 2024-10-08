#include "SSPlayerCardData.h"

FSSPlayerCardData::FSSPlayerCardData() {
    this->PlayingTime = EKoratPlayingTime::None;
    this->PlayMode = EKoratPlayModeType::PlayMode_Story;
    this->ShowBattleMode012Info = false;
    this->ShowBattleMode010Info = false;
    this->ShowTournamentInfo = false;
    this->ShowRankMatchInfo = false;
    this->IsNeedSync = false;
}

