#include "SSBattleMode010Result.h"

FSSBattleMode010Result::FSSBattleMode010Result() {
    this->bIsNewRecord = false;
    this->bIsUseEventPointBoost = false;
    this->bIsIllegalAlert = false;
    this->EventPoint = 0;
    this->AddEventPoint = 0;
    this->RewardPoint = 0;
    this->AddRewardPoint = 0;
    this->BattlePassPoint = 0;
    this->AddBattlePassPoint = 0;
    this->Difficulty = ESSBattleMode010Difficulty::None;
    this->KillCount = 0;
    this->TimePoint = 0;
}

