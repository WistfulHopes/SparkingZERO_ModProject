#include "SpUICircleGauge.h"
#include "Components/SlateWrapperTypes.h"

USpUICircleGauge::USpUICircleGauge() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::HitTestInvisible;
    this->bGaugeReverse = false;
    this->GaugeAngle = 0.00f;
    this->GaugeMax = 1.00f;
    this->Percent = 1.00f;
    this->BaseTexture = NULL;
    this->MaskTexture = NULL;
    this->GaugeMaterial = NULL;
}

void USpUICircleGauge::SetPercent(const float InPercent) {
}

float USpUICircleGauge::GetPercent() const {
    return 0.0f;
}


