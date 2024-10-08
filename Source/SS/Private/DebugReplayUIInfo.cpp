#include "DebugReplayUIInfo.h"

FDebugReplayUIInfo::FDebugReplayUIInfo() {
    this->bCanDebugReplayPlay = false;
    this->bCanDebugReplayRecord = false;
    this->bCanDebugReplayStop = false;
    this->CurrentPlayFrame = 0;
    this->TotalPlayFrame = 0;
    this->bCanDebugReplayLoop = false;
    this->bCanReplayLoad = false;
    this->bCanReplaySave = false;
    this->bIsShowWindow = false;
    this->bIsDebugReplayFlag = false;
    this->bIsDebugReplayRecordFlag = false;
    this->bIsPlayReplay1P = false;
    this->bIsPlayReplay2P = false;
    this->ReplayInputsIndex = 0;
    this->bIsCheckSumError = false;
    this->bIsPlayReplay = false;
}

