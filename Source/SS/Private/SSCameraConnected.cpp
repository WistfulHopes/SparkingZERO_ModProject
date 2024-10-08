#include "SSCameraConnected.h"

FSSCameraConnected::FSSCameraConnected() {
    this->CameraInstance = NULL;
    this->SequencerStartTime = 0.00f;
    this->SequencerCloseStartTime = 0.00f;
    this->SequencerLeaveStartTime = 0.00f;
    this->SequencerCloseTimeCam = 0.00f;
    this->SequencerCloseTimeLat = 0.00f;
    this->SectionStartFrame = 0;
    this->SectionEndFrameCam = 0;
    this->SectionEndFrameLat = 0;
    this->ReverseTrack = false;
    this->bThirdCameraCancel = false;
    this->ReconnectPriorityType = ERootDirectorReconnectPriorityType::None;
    this->bForcePriorityDownDelay = false;
}

