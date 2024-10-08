#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KantanCartesianDatasourceInterface.h"
#include "KantanTimeSeriesPlotBase.h"
#include "SimpleTimeSeriesPlot.generated.h"

UCLASS(Blueprintable)
class KANTANCHARTSUMG_API USimpleTimeSeriesPlot : public UKantanTimeSeriesPlotBase, public IKantanCartesianDatasourceInterface {
    GENERATED_BODY()
public:
    USimpleTimeSeriesPlot();

    UFUNCTION(BlueprintCallable)
    void BP_SetDatapointLimit(int32 Limit);
    
    UFUNCTION(BlueprintCallable)
    void BP_RemoveSeries(FName ID, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void BP_RemoveAllSeries();
    
    UFUNCTION(BlueprintCallable)
    void BP_AddSeriesWithId(bool& bSuccess, FName ID, FText Name, bool bEnabled, bool bShowPoints, bool bShowLines);
    
    UFUNCTION(BlueprintCallable)
    void BP_AddSeries(FName& SeriesId, FText Name, bool bEnabled, bool bShowPoints, bool bShowLines);
    
    UFUNCTION(BlueprintCallable)
    void BP_AddDatapointNow(FName SeriesId, float Value, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void BP_AddDatapoint(FName SeriesId, const FVector2D& Point, bool& bSuccess);
    

    // Fix for true pure virtual functions not being implemented
};

