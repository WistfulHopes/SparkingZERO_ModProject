#include "KoratSequenceCameraDescription.h"

FKoratSequenceCameraDescription::FKoratSequenceCameraDescription() {
    this->CameraLerpTimeStart = 0.00f;
    this->CameraLerpTimeEnd = 0.00f;
    this->CameraSlot = 0;
    this->CameraBranch = 0;
    this->ManualCameraReconnect = false;
    this->UseCameraRootTransform = false;
    this->CameraRootTransformActor = NULL;
    this->NoUseOwnerCutDirector = false;
    this->DelayConnectTime = 0.00f;
}

