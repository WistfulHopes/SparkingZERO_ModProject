#include "SpUIGauge.h"
#include "Components/SlateWrapperTypes.h"

USpUIGauge::USpUIGauge() {
    this->bIsVariable = false;
    this->Visibility = ESlateVisibility::HitTestInvisible;
    this->FillType = EProgressBarFillType::LeftToRight;
    this->Percent = 1.00f;
    this->BaseTexture = NULL;
    this->MaskTexture = NULL;
    this->GaugeMaterial = NULL;
}

void USpUIGauge::SetPercent(const float InPercent) {
}

float USpUIGauge::GetPercent() const {
    return 0.0f;
}


