#include "SSBulletCurveCollisionSize.h"

USSBulletCurveCollisionSize::USSBulletCurveCollisionSize() {
    this->MinKeyTime = 0.00f;
    this->MaxKeyTime = 0.00f;
    this->MinSize = 0.00f;
    this->MaxSize = 0.00f;
}

float USSBulletCurveCollisionSize::GetCollisionSize(float InTime) const {
    return 0.0f;
}


