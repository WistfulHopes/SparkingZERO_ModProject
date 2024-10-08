#include "SSBattleCameraActor.h"

ASSBattleCameraActor::ASSBattleCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MyPawn = NULL;
    this->TargetPawn = NULL;
    this->LookAtNullOffsetMy = 100.00f;
    this->LookAtNullOffsetTarget = 100.00f;
    this->ShortAngleMax = 60.00f;
    this->LongAngleMax = 25.00f;
    this->ShortAngleMaxPosition = 60.00f;
    this->LongAngleMaxPosition = 400.00f;
    this->DefaultYawInterpMax = 0.10f;
    this->DefaultPosInterpRate = 0.51f;
    this->DefaultChangeEndInterpSec = 0.10f;
    this->bDragonDashStatus = false;
    this->bTargetLockOn = false;
    this->MyCharaMoveSpeed = 1.00f;
}


