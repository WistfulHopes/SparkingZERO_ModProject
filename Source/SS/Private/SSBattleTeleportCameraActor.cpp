#include "SSBattleTeleportCameraActor.h"

ASSBattleTeleportCameraActor::ASSBattleTeleportCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAvoidTerrainDisableArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleCamLengthArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleFocalLengthArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleHeightArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleBaseYawArray.AddDefaulted(4);
    this->PhysicalDisparityBoundScaleDecayRateArray.AddDefaulted(4);
    this->bLookAtNullOffsetTargetImitationArray.AddDefaulted(4);
    this->LookUpEnemySectionArray.AddDefaulted(4);
    this->TeleportCameraStartYaw = 135.00f;
    this->TeleportCameraEndYaw = 150.00f;
    this->TeleportCameraPitch = 0.00f;
    this->BoneWeight = 0.50f;
    this->camLengthMin = 0.00f;
    this->bTeleported = false;
    this->bDragonDashStatus = false;
    this->bTargetLockOn = false;
    this->MyCharaMoveSpeed = 0.00f;
}


