#include "KoratCharacterDataDragonDashMovementParameter.h"

FKoratCharacterDataDragonDashMovementParameter::FKoratCharacterDataDragonDashMovementParameter() {
    this->bIsUseParameter = false;
    this->bIsClearVelocityAtStart = false;
    this->MaxSpeed = 0.00f;
    this->AddMoveHoldTime = 0.00f;
    this->MaxAcceleration = 0.00f;
    this->BrakingDeceleration = 0.00f;
    this->AccelerationTimeToMaxSpeed = 0.00f;
    this->AccelerationCurve = NULL;
}

