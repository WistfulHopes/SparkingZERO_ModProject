#include "SSBattleBlowAwayCameraActor.h"

ASSBattleBlowAwayCameraActor::ASSBattleBlowAwayCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAvoidTerrainDisableArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleCamLengthArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleFocalLengthArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleHeightArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleBaseYawArray.AddDefaulted(4);
    this->PhysicalDisparityBoundScaleDecayRateArray.AddDefaulted(4);
    this->bLookAtNullOffsetTargetImitationArray.AddDefaulted(4);
    this->LookUpEnemySectionArray.AddDefaulted(4);
    this->BlowAwayCameraYaw = 135.00f;
    this->StartCamLength = 300.00f;
    this->bDragonDashStatus = false;
    this->bTargetLockOn = false;
    this->MyCharaMoveSpeed = 0.00f;
}


