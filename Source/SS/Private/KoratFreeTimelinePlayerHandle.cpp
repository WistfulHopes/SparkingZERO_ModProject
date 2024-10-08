#include "KoratFreeTimelinePlayerHandle.h"

FKoratFreeTimelinePlayerHandle::FKoratFreeTimelinePlayerHandle() {
    this->UniqueHandleId = 0;
    this->bPlayedOTLabel = false;
    this->RequestController = NULL;
    this->FreeTimelinePlayerInstance = NULL;
    this->UsedAsset = NULL;
}

