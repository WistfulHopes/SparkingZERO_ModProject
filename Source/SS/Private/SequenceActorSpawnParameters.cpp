#include "SequenceActorSpawnParameters.h"

FSequenceActorSpawnParameters::FSequenceActorSpawnParameters() {
    this->World = NULL;
    this->OwnerActor = NULL;
    this->ExecuteActor = NULL;
    this->LevelSequence = NULL;
    this->bLooped = false;
    this->bPauseAtEnd = false;
    this->StartFrame = 0;
    this->bRebindPlayer = false;
    this->bEnablePlayerTransformTrack = false;
    this->bEnablePlayerAnimationTrack = false;
    this->bOverrideTransform = false;
    this->OverrideTransformActor = NULL;
    this->bPlayExec = false;
    this->CancelSequence = NULL;
    this->hasCharacterEffectColorData = false;
    this->hasWorldPointLightData = false;
    this->CameraLerpTimeStart = 0.00f;
    this->CameraLerpTimeEnd = 0.00f;
    this->CameraSlot = 0;
    this->CameraBranch = 0;
    this->ManualCameraReconnect = false;
    this->UseCameraRootTransform = false;
    this->CameraRootTransformActor = NULL;
    this->NoUseOwnerCutDirector = false;
    this->DelayConnectTime = 0.00f;
    this->isRegistCustomTimeDilation = false;
}

