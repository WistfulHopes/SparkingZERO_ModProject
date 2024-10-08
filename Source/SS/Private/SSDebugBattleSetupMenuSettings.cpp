#include "SSDebugBattleSetupMenuSettings.h"

USSDebugBattleSetupMenuSettings::USSDebugBattleSetupMenuSettings() {
    this->LastSelectedPlayer1.AddDefaulted(5);
    this->LastSelectedPlayer2.AddDefaulted(5);
    this->bLastOnlineBattleFlg = false;
    this->LastBattleKeyMode = EKoratBattleKeyMode::Key1Pvs2P;
    this->LastOfflineSelectNo = 0;
    this->LastOnlineSelectNo = 0;
    this->LastTimeLimitSelectNo = 0;
    this->LastMaxMaintain1p = false;
    this->LastMaxMaintain2p = false;
    this->LastOutField = false;
}


