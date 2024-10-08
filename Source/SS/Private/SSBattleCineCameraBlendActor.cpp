#include "SSBattleCineCameraBlendActor.h"

ASSBattleCineCameraBlendActor::ASSBattleCineCameraBlendActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentApertureStart = 10.00f;
    this->CurrentApertureEnd = 10.00f;
    this->CurrentFocalLengthStart = 31.18f;
    this->CurrentFocalLengthEnd = 31.18f;
    this->CurrentFocusDistanceStart = 0.00f;
    this->CurrentFocusDistanceEnd = 0.00f;
    this->BlendTimeMax = 0.00f;
    this->BlendTimeLookAtMax = 0.00f;
    this->BattleCameraBlendType = EKoratBattleCameraBlendType::KoratBattleCameraBlendTypeEaseInOut;
    this->BattleCameraLine = EKoratBattleCameraLine::KoratBattleCameraBlendLineCurve;
    this->BlendLineArcMax = 1.00f;
    this->BlendRate = 0.00f;
    this->BlendRateLookAt = 0.00f;
}


