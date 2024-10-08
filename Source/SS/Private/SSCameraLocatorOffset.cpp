#include "SSCameraLocatorOffset.h"

ASSCameraLocatorOffset::ASSCameraLocatorOffset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CameraLocatorOffsetID = ECameraLocatorOffsetID::None;
    this->SrcOffsetPitch = 0.00f;
    this->SrcOffsetYaw = 0.00f;
    this->SrcOffsetRoll = 0.00f;
    this->DstOffsetPitch = 0.00f;
    this->DstOffsetYaw = 0.00f;
    this->DstOffsetRoll = 0.00f;
}


