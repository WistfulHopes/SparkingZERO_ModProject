#include "SSBattleSetupCustomizeRadarChartUi.h"

USSBattleSetupCustomizeRadarChartUi::USSBattleSetupCustomizeRadarChartUi() {
    this->ScreenSizeCanvasSlotWidgetName.AddDefaulted(1);
    this->ChartPartsImageScalarParameterMax = 5.00f;
    this->ChartPartsImageScalarParameterMin = 0.00f;
    this->ChartChangeInterpolateCurve = NULL;
    this->DefaultInterpolateSec = 0.50f;
}


