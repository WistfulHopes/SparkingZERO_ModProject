#include "SSSpeedImpactTimingUi.h"

USSSpeedImpactTimingUi::USSSpeedImpactTimingUi() {
    this->DefaultJustTiming = 0.75f;
    this->DefaultJustJudgeLength = 0.10f;
    this->CircleScaleCurve = NULL;
    this->DebugProgressSpeed = 1.00f;
    this->CircleTiming = NULL;
    this->CircleSuccessLine = NULL;
    this->CircleSuccessMaterial = NULL;
    this->PressButton = NULL;
}

void USSSpeedImpactTimingUi::SetResult(ESSSpeedImpactTimingUiJudge InJudge) {
}

void USSSpeedImpactTimingUi::SetProgress(float InProgress) {
}

void USSSpeedImpactTimingUi::SetJustTiming(float InJustTiming) {
}

void USSSpeedImpactTimingUi::SetJustLength(float InJustLength) {
}





void USSSpeedImpactTimingUi::JudgeStart() {
}

void USSSpeedImpactTimingUi::DebugTimingDecided() {
}

bool USSSpeedImpactTimingUi::DebugIsDecided() const {
    return false;
}

void USSSpeedImpactTimingUi::DebugEnablebAutoProgress(bool bEnable) {
}


