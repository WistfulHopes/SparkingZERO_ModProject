#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyleContainerBase.h"
#include "KantanCartesianChartStyle.h"
#include "KantanCartesianChartWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKantanCartesianChartWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKantanCartesianChartStyle ChartStyle;
    
    UKantanCartesianChartWidgetStyle();

};

