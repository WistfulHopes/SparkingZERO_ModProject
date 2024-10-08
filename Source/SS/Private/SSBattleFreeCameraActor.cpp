#include "SSBattleFreeCameraActor.h"

ASSBattleFreeCameraActor::ASSBattleFreeCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAvoidTerrainDisableArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleCamLengthArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleFocalLengthArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleHeightArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleBaseYawArray.AddDefaulted(4);
    this->PhysicalDisparityBoundScaleDecayRateArray.AddDefaulted(4);
    this->bLookAtNullOffsetTargetImitationArray.AddDefaulted(4);
    this->LookUpEnemySectionArray.AddDefaulted(4);
    this->AdjustFromBase = false;
    this->FreeCameraPitch = 0.00f;
    this->FreeCameraLength = 500.00f;
    this->LagScaleQuietTimeMin = 0.01f;
    this->LagScaleMax = 1.00f;
    this->LagScaleMin = 0.10f;
    this->LagScaleDecayPerSec = 3.00f;
    this->LagScaleQuietTime = 0.00f;
    this->LagScaleNow = 1.00f;
    this->bDragonDashStatus = false;
    this->bTargetLockOn = false;
    this->MyCharaMoveSpeed = 0.00f;
    this->ZSearchReleasedEndLerpTimeMax = 0.50f;
    this->ZSearchReleasedEndLerpTimePriority = 0.30f;
    this->ZSearchReleasedEndLerpWithFrameInEnemy = false;
    this->bDebugZSearchReleasedForce = false;
}

void ASSBattleFreeCameraActor::DebugZSearchReleasedForce(bool InEnable) {
}


