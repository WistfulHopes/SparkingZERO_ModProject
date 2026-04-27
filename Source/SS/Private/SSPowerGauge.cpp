#include "SSPowerGauge.h"

USSPowerGauge::USSPowerGauge() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->GaugeWarningWidth = 0.20f;
    this->TheoreticalPowerMax = 0.80f;
    this->GaugeScaleCurve = NULL;
    this->ImpactResult = ESSPowerGaugeResult::None;
}







