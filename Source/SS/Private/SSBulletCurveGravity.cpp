#include "SSBulletCurveGravity.h"

USSBulletCurveGravity::USSBulletCurveGravity() {
    this->MinKeyTime = 0.00f;
    this->MaxKeyTime = 0.00f;
    this->MinScale = 0.00f;
    this->MaxScale = 0.00f;
}

float USSBulletCurveGravity::GetGravityValue(float InTime) const {
    return 0.0f;
}


