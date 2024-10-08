#include "SSCharacterRaderChart.h"

USSCharacterRaderChart::USSCharacterRaderChart() {
    this->RaderChartNumeric = NULL;
    this->FixedKiValue = 1.00f;
    this->RadarChartParamMin = 1.00f;
}

void USSCharacterRaderChart::CalcRadarChartParamInner_Implementation(const FKoratBlastActionDataAssetRecord& InBlastActions, const FKoratCharacterDataAssetRecord& InCharacterData, TArray<float>& OutRadarChartParam) {
}


