#include "SSBattleRushCameraActor.h"

ASSBattleRushCameraActor::ASSBattleRushCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAvoidTerrainDisableArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleCamLengthArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleFocalLengthArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleHeightArray.AddDefaulted(4);
    this->PhysicalDisparityDecayScaleBaseYawArray.AddDefaulted(4);
    this->PhysicalDisparityBoundScaleDecayRateArray.AddDefaulted(4);
    this->bLookAtNullOffsetTargetImitationArray.AddDefaulted(4);
    this->LookUpEnemySectionArray.AddDefaulted(4);
    this->RushState = ERushState::NONE;
    this->LagConvergence = 3.00f;
    this->bFilmbackScaleDecay = true;
    this->FilmbackScaleDecayTimeMin = 1.00f;
    this->FilmbackScaleDecayTimeMax = 2.00f;
    this->RushCameraYawFix = 1.00f;
    this->RushCameraLenFix = 2000.00f;
    this->LookAtTargetFixRate = 0.00f;
    this->FixToChaseRangePToE = 2000.00f;
    this->FixToChaseRangeCToP = 5000.00f;
    this->RushCameraYawChase = 135.00f;
    this->RushCameraLenChase = 400.00f;
    this->RushCameraChaseSpeedMax = 100000.00f;
    this->RushCameraFovScale = 0.50f;
    this->StartElapsedTime = 0.00f;
    this->bDragonDashStatus = false;
    this->bTargetLockOn = false;
    this->MyCharaMoveSpeed = 0.00f;
}


