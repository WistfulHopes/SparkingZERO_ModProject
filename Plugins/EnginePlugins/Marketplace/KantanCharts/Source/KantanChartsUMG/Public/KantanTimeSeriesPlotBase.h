#pragma once
#include "CoreMinimal.h"
#include "CartesianRangeBound.h"
#include "KantanCartesianChartBase.h"
#include "KantanTimeSeriesPlotBase.generated.h"

UCLASS(Abstract, Blueprintable)
class KANTANCHARTSUMG_API UKantanTimeSeriesPlotBase : public UKantanCartesianChartBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFixedTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTimeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCartesianRangeBound LowerTimeBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCartesianRangeBound UpperTimeBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCartesianRangeBound LowerValueBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCartesianRangeBound UpperValueBound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExtendValueRangeToZero;
    
    UKantanTimeSeriesPlotBase();

    UFUNCTION(BlueprintCallable)
    void SetUpperValueBound(FCartesianRangeBound InUpperBound);
    
    UFUNCTION(BlueprintCallable)
    void SetUpperTimeBound(FCartesianRangeBound InUpperBound);
    
    UFUNCTION(BlueprintCallable)
    void SetLowerValueBound(FCartesianRangeBound InLowerBound);
    
    UFUNCTION(BlueprintCallable)
    void SetLowerTimeBound(FCartesianRangeBound InLowerBound);
    
};

