#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Components/Widget.h"
#include "KantanChart.generated.h"

UCLASS(Abstract, Blueprintable)
class KANTANCHARTSUMG_API UKantanChart : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Margins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChartTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin TitlePadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateTickRate;
    
    UKantanChart();

    UFUNCTION(BlueprintCallable)
    void SetUpdateTickRate(float InRate);
    
    UFUNCTION(BlueprintCallable)
    void SetMargins(const FMargin& InMargins);
    
    UFUNCTION(BlueprintCallable)
    void SetChartTitlePadding(const FMargin& InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetChartTitle(const FText& InTitle);
    
};

