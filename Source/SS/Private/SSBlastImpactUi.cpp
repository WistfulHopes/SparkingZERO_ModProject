#include "SSBlastImpactUi.h"

USSBlastImpactUi::USSBlastImpactUi() {
    this->ChargeGaugeCurve = NULL;
    this->GaugeScaleCurve = NULL;
    this->DebugProgressSpeed = 0.50f;
    this->ZoomPoint.AddDefaulted(4);
    this->ZoomScale.AddDefaulted(4);
}

void USSBlastImpactUi::SetTheoreticalValue(float InValue) {
}

void USSBlastImpactUi::SetTheoreticalScale(float InScale) {
}

bool USSBlastImpactUi::SetResult(ESSBlastImpactUiResult InResult) {
    return false;
}

void USSBlastImpactUi::SetRestTime(ESSBlastImpactCount InCount) {
}

void USSBlastImpactUi::SetGaugeValue(float InValue) {
}

void USSBlastImpactUi::SetDefaultMax(float InMax) {
}

void USSBlastImpactUi::SetBoostScale(float InScale) {
}




void USSBlastImpactUi::JudgeStart() {
}

void USSBlastImpactUi::DebugSetJudgeStart() {
}

void USSBlastImpactUi::DebugResult(ESSBlastImpactUiResult InResult) {
}

void USSBlastImpactUi::DebugChargePower() {
}

void USSBlastImpactUi::ChargePowerStart() {
}


