#include "KoratModeHUNSaveDataRecord.h"

FKoratModeHUNSaveDataRecord::FKoratModeHUNSaveDataRecord() {
    this->UnLockMode = EKoratUnLockMode::Lock;
    this->bIsCleard = false;
    this->TopScore = 0;
    this->TopRank = 0;
    this->TopBattleTime = 0.00f;
}

