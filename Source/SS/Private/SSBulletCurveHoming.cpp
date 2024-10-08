#include "SSBulletCurveHoming.h"

USSBulletCurveHoming::USSBulletCurveHoming() {
    this->MinPitchUpKeyTime = 0.00f;
    this->MaxPitchUpKeyTime = 0.00f;
    this->MinPitchUp = 0.00f;
    this->MaxPitchUp = 0.00f;
    this->MinPitchDownKeyTime = 0.00f;
    this->MaxPitchDownKeyTime = 0.00f;
    this->MinPitchDown = 0.00f;
    this->MaxPitchDown = 0.00f;
    this->MinYawLeftKeyTime = 0.00f;
    this->MaxYawLeftKeyTime = 0.00f;
    this->MinYawLeft = 0.00f;
    this->MaxYawLeft = 0.00f;
    this->MinYawRightKeyTime = 0.00f;
    this->MaxYawRightKeyTime = 0.00f;
    this->MinYawRight = 0.00f;
    this->MaxYawRight = 0.00f;
    this->MinRollLeftKeyTime = 0.00f;
    this->MaxRollLeftKeyTime = 0.00f;
    this->MinRollLeft = 0.00f;
    this->MaxRollLeft = 0.00f;
    this->MinRollRightKeyTime = 0.00f;
    this->MaxRollRightKeyTime = 0.00f;
    this->MinRollRight = 0.00f;
    this->MaxRollRight = 0.00f;
}

FVector2D USSBulletCurveHoming::GetYawValue(float InTime) const {
    return FVector2D{};
}

FVector2D USSBulletCurveHoming::GetRollValue(float InTime) const {
    return FVector2D{};
}

FVector2D USSBulletCurveHoming::GetPitchValue(float InTime) const {
    return FVector2D{};
}


