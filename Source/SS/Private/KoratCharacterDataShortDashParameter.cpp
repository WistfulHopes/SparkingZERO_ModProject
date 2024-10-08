#include "KoratCharacterDataShortDashParameter.h"

FKoratCharacterDataShortDashParameter::FKoratCharacterDataShortDashParameter() {
    this->AddToSpeedCurve = NULL;
    this->AddToSpeedScale = 0.00f;
    this->MaxAcceleration = 0.00f;
    this->BrakingDeceleration = 0.00f;
    this->ElapsedTimeToOT = 0.00f;
    this->Duration = 0.00f;
    this->CoolTime = 0.00f;
    this->bIsStopClearSpeed = false;
    this->StopBrakingDeceleration = 0.00f;
    this->SpCost = 0.00f;
}

