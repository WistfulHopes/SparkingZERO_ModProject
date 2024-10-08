#include "KoratHitBackMovementData.h"

FKoratHitBackMovementData::FKoratHitBackMovementData() {
    this->IsSpeedReset = false;
    this->Duration = 0.00f;
    this->InitialSpeed = 0.00f;
    this->MaxSpeed = 0.00f;
    this->StepMaxHoldTime = 0.00f;
    this->GravityScale = 0.00f;
    this->MaxAcceleration = 0.00f;
    this->GroundFriction = 0.00f;
    this->BrakingDeceleration = 0.00f;
    this->VerticalAngle = 0.00f;
    this->HorizontalAngle = 0.00f;
    this->AngleToReduceTilt = 0.00f;
}

