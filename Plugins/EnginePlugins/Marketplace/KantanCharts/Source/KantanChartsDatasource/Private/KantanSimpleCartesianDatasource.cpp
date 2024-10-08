#include "KantanSimpleCartesianDatasource.h"

UKantanSimpleCartesianDatasource::UKantanSimpleCartesianDatasource() {
}

UKantanSimpleCartesianDatasource* UKantanSimpleCartesianDatasource::NewSimpleCartesianDatasource(int32 MaxDatapoints) {
    return NULL;
}

void UKantanSimpleCartesianDatasource::BP_SetDatapointLimit(int32 Limit) {
}

void UKantanSimpleCartesianDatasource::BP_RemoveSeries(FName ID, bool& bSuccess) {
}

void UKantanSimpleCartesianDatasource::BP_RemoveAllSeries() {
}

void UKantanSimpleCartesianDatasource::BP_AddSeriesWithId(FName ID, FText Name, bool& bSuccess) {
}

void UKantanSimpleCartesianDatasource::BP_AddSeries(FText Name, FName& SeriesId) {
}

void UKantanSimpleCartesianDatasource::BP_AddDatapoint(FName SeriesId, const FVector2D& Point, bool& bSuccess) {
}


