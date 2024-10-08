#include "SSDragonDashDataAsset.h"

USSDragonDashDataAsset::USSDragonDashDataAsset() {
    this->RotationSpeedSwitchDistance = 500.00f;
    this->RotationSpeedInterpolateRange = 50.00f;
    this->RotationPitchMin = -45.00f;
    this->RotationPitchMax = 45.00f;
    this->ChangeDirectionInputAngleBack = 120.00f;
    this->INAnimTimeRemainingFractionToLP = 0.00f;
    this->BKInvalidInputTimeLP = 0.20f;
    this->RestartInputTimeOT = 0.10f;
    this->TurnSpeedINOT = 720.00f;
    this->TurnSpeedBK = 720.00f;
    this->bIsZMoveOnInputFront = true;
    this->ZRotationSpeedOnInputFront = 60.00f;
    this->End0Distance = 500.00f;
    this->End0Angle = 45.00f;
    this->End1Speed = 100.00f;
    this->End1Time = 0.10f;
    this->SpCostIN = 0.00f;
    this->SpCostLP = 0.00f;
    this->SpCostBK = 0.00f;
}


