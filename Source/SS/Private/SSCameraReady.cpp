#include "SSCameraReady.h"

FSSCameraReady::FSSCameraReady() {
    this->CameraType = ECameraType::CameraTypeNone;
    this->CameraInstance = NULL;
    this->SequencerStartTime = 0.00f;
    this->SectionStartFrame = 0;
    this->SectionEndFrameCam = 0;
    this->SectionEndFrameLat = 0;
    this->ReverseTrack = false;
    this->IsFirstConnect = false;
}

