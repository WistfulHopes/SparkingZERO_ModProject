#include "SSMainMenuTransitionBattleData.h"

FSSMainMenuTransitionBattleData::FSSMainMenuTransitionBattleData() {
    this->OnlineBattleFlg = false;
    this->BattleOnlineMode = EKoratBattleOnlineMode::None;
    this->BattleKeyMode = EKoratBattleKeyMode::Key1Pvs2P;
    this->BattleMenu = EKoratBattleMenu::SetupBattle;
    this->BattleTimeLimit = 0.00f;
}

