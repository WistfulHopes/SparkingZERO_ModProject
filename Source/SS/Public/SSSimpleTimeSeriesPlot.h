#pragma once
#include "CoreMinimal.h"
#include "SimpleTimeSeriesPlot.h"
#include "OnChangeXAxisValueDelegate.h"
#include "SSSimpleTimeSeriesPlot.generated.h"

UCLASS(Blueprintable)
class SS_API USSSimpleTimeSeriesPlot : public USimpleTimeSeriesPlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeXAxisValue OnChangeXAxisValue;
    
    USSSimpleTimeSeriesPlot();

    UFUNCTION(BlueprintCallable)
    void ChangeXAxisValue(const float InChangeValue);
    
};

