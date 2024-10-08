#include "SSMissionUserDataSaveData.h"

FSSMissionUserDataSaveData::FSSMissionUserDataSaveData() {
    this->ClearMode = ESSMissionCleraMode::NotClear;
    this->ClearNum = 0;
    this->ClearNumFloatStorage = 0.00f;
    this->ClearNumIntStorage = 0;
    this->bIsNeedShowInfoIcon = false;
    this->bIsOverLimit = false;
    this->bIsReleased = false;
    this->bIsPlatformTrophyUnlock = false;
}

