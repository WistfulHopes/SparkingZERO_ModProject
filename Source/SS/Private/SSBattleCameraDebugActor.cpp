#include "SSBattleCameraDebugActor.h"

ASSBattleCameraDebugActor::ASSBattleCameraDebugActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RotationMaxSpeedFreeCamera = 90.00f;
    this->AngleMaxSpeedFreeCamera = 90.00f;
    this->MovementMaxSpeedFreeCamera = 3000.00f;
    this->AngleMinFreeCamera = -80.00f;
    this->AngleMaxFreeCamera = 80.00f;
    this->BattleCameraMode = EBattleCameraMode::BattleCameraModeBattle;
    this->BattleCameraTarget = EBattleCameraTarget::BattleCameraTargetNon;
}


