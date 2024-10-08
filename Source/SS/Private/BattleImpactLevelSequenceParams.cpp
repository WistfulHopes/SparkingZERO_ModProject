#include "BattleImpactLevelSequenceParams.h"

FBattleImpactLevelSequenceParams::FBattleImpactLevelSequenceParams() {
    this->ActionCameraAsset = NULL;
    this->StartFrame = 0;
    this->bLoop = false;
    this->CameraLerpTime = 0.00f;
    this->CameraSlot = 0;
    this->CameraBranch = 0;
    this->ManualCameraReconnect = false;
}

