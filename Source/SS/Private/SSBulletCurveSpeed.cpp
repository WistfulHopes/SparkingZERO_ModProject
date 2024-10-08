#include "SSBulletCurveSpeed.h"

USSBulletCurveSpeed::USSBulletCurveSpeed() {
    this->MinKeyTime = 0.00f;
    this->MaxKeyTime = 0.00f;
    this->MinSpeed = 0.00f;
    this->MaxSpeed = 0.00f;
}

float USSBulletCurveSpeed::GetWayDistance() const {
    return 0.0f;
}

float USSBulletCurveSpeed::GetSpeedValue(float InTime) const {
    return 0.0f;
}


