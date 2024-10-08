#include "KoratBattleReward.h"

FKoratBattleReward::FKoratBattleReward() {
    this->RewardMode = EKoratBattleRewardMode::None;
    this->AcquisitionStart = 0;
    this->HowMmnyTimes = 0;
    this->ClearCondition = EKoratBattleRewardClearCondition::None;
}

