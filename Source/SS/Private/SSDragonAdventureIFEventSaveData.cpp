#include "SSDragonAdventureIFEventSaveData.h"

FSSDragonAdventureIFEventSaveData::FSSDragonAdventureIFEventSaveData() {
    this->bReadOnlyResultIndex = false;
    this->ResultIndex = 0;
    this->UnlockInfo = EKoratUnLockMode::Lock;
    this->NormalClearCount = 0;
    this->AnotherClearCount = 0;
    this->EpisodeRewardUnlockInfo = EKoratUnLockMode::Lock;
}

