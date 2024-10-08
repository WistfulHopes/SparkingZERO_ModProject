#include "KoratCharacterDataDragonDashParameter.h"

FKoratCharacterDataDragonDashParameter::FKoratCharacterDataDragonDashParameter() {
    this->RotationSpeedSwitchDistance = 0.00f;
    this->RotationSpeedInterpolateRange = 0.00f;
    this->RotationPitchMin = 0.00f;
    this->RotationPitchMax = 0.00f;
    this->ChangeDirectionInputAngleBack = 0.00f;
    this->INAnimTimeRemainingFractionToLP = 0.00f;
    this->BKInvalidInputTimeLP = 0.00f;
    this->RestartInputTimeOT = 0.00f;
    this->TurnSpeedINOT = 0.00f;
    this->TurnSpeedBK = 0.00f;
    this->bIsZMoveOnInputFront = false;
    this->ZRotationSpeedOnInputFront = 0.00f;
    this->End0Distance = 0.00f;
    this->End0Angle = 0.00f;
    this->End1Speed = 0.00f;
    this->End1Time = 0.00f;
    this->SpCostIN = 0.00f;
    this->SpCostLP = 0.00f;
    this->SpCostBK = 0.00f;
}

