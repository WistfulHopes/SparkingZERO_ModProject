#include "KantanTimeSeriesPlotBase.h"

UKantanTimeSeriesPlotBase::UKantanTimeSeriesPlotBase() {
    this->bUseFixedTimeRange = true;
    this->DisplayTimeRange = 10.00f;
    this->bExtendValueRangeToZero = true;
}

void UKantanTimeSeriesPlotBase::SetUpperValueBound(FCartesianRangeBound InUpperBound) {
}

void UKantanTimeSeriesPlotBase::SetUpperTimeBound(FCartesianRangeBound InUpperBound) {
}

void UKantanTimeSeriesPlotBase::SetLowerValueBound(FCartesianRangeBound InLowerBound) {
}

void UKantanTimeSeriesPlotBase::SetLowerTimeBound(FCartesianRangeBound InLowerBound) {
}


