#include "KoratCharacterDataStepParameter.h"

FKoratCharacterDataStepParameter::FKoratCharacterDataStepParameter() {
    this->bIsUseOTParameter = false;
    this->bIsClearVelocityAtStart = false;
    this->bIsRotateToTarget = false;
    this->MaxSpeed = 0.00f;
    this->StepMaxHoldTime = 0.00f;
    this->GravityScale = 0.00f;
    this->MaxAcceleration = 0.00f;
    this->GroundFriction = 0.00f;
    this->BrakingDeceleration = 0.00f;
}

