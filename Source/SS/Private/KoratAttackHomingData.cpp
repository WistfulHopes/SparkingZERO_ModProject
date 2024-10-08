#include "KoratAttackHomingData.h"

FKoratAttackHomingData::FKoratAttackHomingData() {
    this->SortId = 0;
    this->IsRehoming = false;
    this->IsShortRangeOnly = false;
    this->IsClearVelocityAtStart = false;
    this->AddMovementTime = 0.00f;
    this->MaxSpeed = 0.00f;
    this->GravityScale = 0.00f;
    this->MaxAcceleration = 0.00f;
    this->GroundFriction = 0.00f;
    this->BrakingDeceleration = 0.00f;
    this->HomingMaxAngle = 0.00f;
    this->IsMoveOutOfHomingAngleRange = false;
}

