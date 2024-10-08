#include "SSCutCameraInertiaFactor.h"

FSSCutCameraInertiaFactor::FSSCutCameraInertiaFactor() {
    this->PreLocationUpdated = false;
    this->PreLocationLatUpdated = false;
    this->PreRotationUpdated = false;
    this->CamMoveAlert = 0.00f;
    this->PreDelayUpdated = false;
    this->DelayLocationUpdated = false;
    this->DelayLocationLatUpdated = false;
    this->bCentrifugalForceAccumlatorUpdated = false;
    this->CentrifugalForceAccumlator = 0.00f;
    this->DelayRotationUpdated = false;
    this->DelayRollUpdated = false;
    this->DelayRollCam = 0.00f;
    this->DelayPitchUpdated = false;
    this->DelayPitchCam = 0.00f;
    this->PrePitchUpdated = false;
    this->PrePitchCam = 0.00f;
}

