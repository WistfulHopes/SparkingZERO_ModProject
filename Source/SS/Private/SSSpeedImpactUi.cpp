#include "SSSpeedImpactUi.h"

USSSpeedImpactUi::USSSpeedImpactUi() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->SuccessTiming = 0.70f;
    this->CircleScaleCurve = NULL;
    this->CircleTiming = NULL;
    this->CircleSuccessLine = NULL;
    this->RapidButton = NULL;
    this->PressButton = NULL;
}

void USSSpeedImpactUi::StartTimingPart(int32 InPlayerIndex) {
}

void USSSpeedImpactUi::StartRapidPart(int32 InPlayerIndex) {
}

void USSSpeedImpactUi::SetSuccessLine(float InSuccessTiming) {
}

void USSSpeedImpactUi::SetDebugRapidInput(bool bInInput) {
}



void USSSpeedImpactUi::DebugTimingDecided() {
}

void USSSpeedImpactUi::DebugStartJudge() {
}


