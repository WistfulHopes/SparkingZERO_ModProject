#include "SSCrashGaugeSet.h"

USSCrashGaugeSet::USSCrashGaugeSet() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->CrashGauge = NULL;
    this->PressButton = NULL;
}

void USSCrashGaugeSet::StartInPlayerIndex(int32 InPlayerIndex) {
}

void USSCrashGaugeSet::DebugDecided(bool bInSuccess) {
}


