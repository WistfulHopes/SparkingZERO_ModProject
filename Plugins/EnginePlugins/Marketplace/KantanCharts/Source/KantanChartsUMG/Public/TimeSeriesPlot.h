#pragma once
#include "CoreMinimal.h"
#include "KantanTimeSeriesPlotBase.h"
#include "TimeSeriesPlot.generated.h"

class UObject;

UCLASS(Blueprintable)
class KANTANCHARTSUMG_API UTimeSeriesPlot : public UKantanTimeSeriesPlotBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* DataSource;
    
public:
    UTimeSeriesPlot();

    UFUNCTION(BlueprintCallable)
    bool SetDatasource(UObject* InDatasource);
    
};

