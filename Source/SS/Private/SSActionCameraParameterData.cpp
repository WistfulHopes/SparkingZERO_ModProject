#include "SSActionCameraParameterData.h"

FSSActionCameraParameterData::FSSActionCameraParameterData() {
    this->Disconnect = false;
    this->InterpolationStartWaitTime = 0.00f;
    this->InterpolationCam = 0.00f;
    this->InterpolationLat = 0.00f;
    this->BattleCameraType = ENewBattleCameraType::NONE;
    this->ZoomLevel = ECameraZoomType::ZoomNone;
    this->TeleportType = ETypeOfTeleportToPassToBattleCamera::None;
    this->bWarpLagReset = false;
    this->Timeout = 0.00f;
    this->BlendCancel = false;
    this->PassiveAcceptStartTime = 0.00f;
    this->PassiveAcceptEndTime = 0.00f;
}

