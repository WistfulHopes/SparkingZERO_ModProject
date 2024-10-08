#include "SSRecvActionCameraInfo.h"

FSSRecvActionCameraInfo::FSSRecvActionCameraInfo() {
    this->IsFirstUpdate = false;
    this->IsForce = false;
    this->IsEnd = false;
    this->RecvTime = 0.00f;
    this->Character = NULL;
    this->ConnectCamera = NULL;
}

