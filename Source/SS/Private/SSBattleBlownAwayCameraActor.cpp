#include "SSBattleBlownAwayCameraActor.h"

ASSBattleBlownAwayCameraActor::ASSBattleBlownAwayCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAvoidTerrainDisableArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleCamLengthArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleFocalLengthArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleHeightArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleBaseYawArray.AddDefaulted(4);
    this->PhysicalDisparityBoundScaleDecayRateArray.AddDefaulted(4);
    this->bLookAtNullOffsetTargetImitationArray.AddDefaulted(4);
    this->LookUpEnemySectionArray.AddDefaulted(4);
    this->HitGroundDisable = false;
    this->LastCamAngle = 170.00f;
    this->StartCamLength = 200.00f;
    this->EndCamLength = 300.00f;
    this->TotalTime = 1.70f;
    this->CamFixTime = 0.25f;
    this->CamFixEndTime = 0.80f;
    this->TurnStartTime = 0.70f;
    this->TurnEndTime = 1.50f;
    this->HitGroundCameraYaw = 0.00f;
    this->HitGroundCameraPitch = 0.00f;
    this->HitGroundCameraLength = 0.00f;
    this->bDelayTurnAng = false;
    this->TurnDelayAngSpeed = 360.00f;
    this->bDragonDashStatus = false;
    this->bTargetLockOn = false;
    this->MyCharaMoveSpeed = 0.00f;
}


