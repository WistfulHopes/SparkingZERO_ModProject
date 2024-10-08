#include "KoratBattleSetting.h"

FKoratBattleSetting::FKoratBattleSetting() {
    this->bBattleMapParameterIsValid = false;
    this->bBattleCharacterParameterIsValid = false;
    this->AlliesTeamMemberNo = 0;
    this->EnemyTeamMemberNo = 0;
    this->BattleKeyMode = EKoratBattleKeyMode::Key1Pvs2P;
    this->bOnlineBattleFlg = false;
    this->BattleOfflineMode = EKoratBattleOfflineMode::SingleBattle;
    this->BattleOnlineMode = EKoratBattleOnlineMode::None;
    this->DbgNetRollType = EDebugVirtualNetPlayerRoleType::Off;
    this->bOnlineBattleSlaveFlg = false;
    this->bAutoBattleLoop = false;
    this->bAutoBattleLoopCharacterRandom = false;
    this->bAutoBattleLoopMapRandom = false;
    this->bAutoBattleLoopPadAddRandom = false;
    this->bAutoBattleLoopErrorRestartOnlineAutoBattleMenu = false;
    this->BattleTimeoverRule = EKoratBattleTimeoverRule::None;
    this->RetryPlayLevel = 0;
    this->StartAppealType = EKoratBattleStartAppealType::Normal;
}

