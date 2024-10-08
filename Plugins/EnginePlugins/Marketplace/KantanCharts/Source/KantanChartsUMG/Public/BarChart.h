#pragma once
#include "CoreMinimal.h"
#include "KantanBarChartBase.h"
#include "BarChart.generated.h"

class UObject;

UCLASS(Blueprintable)
class KANTANCHARTSUMG_API UBarChart : public UKantanBarChartBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* DataSource;
    
public:
    UBarChart();

    UFUNCTION(BlueprintCallable)
    bool SetDatasource(UObject* InDatasource);
    
};

