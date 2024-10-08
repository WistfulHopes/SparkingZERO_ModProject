#include "KantanBarChartBase.h"

UKantanBarChartBase::UKantanBarChartBase() {
    this->Orientation = EKantanBarChartOrientation::Vertical;
    this->MaxBarValue = 0.00f;
    this->LabelPosition = EKantanBarLabelPosition::Standard;
    this->BarToGapRatio = 3.00f;
    this->ValueExtentsDisplay = EKantanBarValueExtents::ZeroLineOnly;
}

void UKantanBarChartBase::SetValueAxisConfig(const FCartesianAxisConfig& InCfg) {
}

void UKantanBarChartBase::SetOrientation(EKantanBarChartOrientation InOrientation) {
}

void UKantanBarChartBase::SetMaxBarValue(float InMaxValue) {
}

void UKantanBarChartBase::SetLabelPosition(EKantanBarLabelPosition InPosition) {
}

void UKantanBarChartBase::SetExtentsDisplay(EKantanBarValueExtents InExtents) {
}

void UKantanBarChartBase::SetBarToGapRatio(float InRatio) {
}


