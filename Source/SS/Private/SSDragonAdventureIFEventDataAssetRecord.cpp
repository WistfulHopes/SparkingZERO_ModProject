#include "SSDragonAdventureIFEventDataAssetRecord.h"

FSSDragonAdventureIFEventDataAssetRecord::FSSDragonAdventureIFEventDataAssetRecord() {
    this->BattleData = NULL;
    this->StoryData = NULL;
    this->TimeSliceData = NULL;
    this->FlyersData = NULL;
    this->WriteOnceBranch = false;
    this->WriteOnceIndex = 0;
    this->bUnlockEventBlock = false;
    this->bIsBadEvend = false;
}

