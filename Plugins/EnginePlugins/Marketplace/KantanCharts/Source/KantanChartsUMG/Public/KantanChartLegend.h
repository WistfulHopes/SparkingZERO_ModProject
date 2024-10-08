#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Components/Widget.h"
#include "KantanChartLegend.generated.h"

class UKantanCartesianChartBase;

UCLASS(Blueprintable)
class KANTANCHARTSUMG_API UKantanChartLegend : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Margins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin SeriesPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UKantanCartesianChartBase> Chart;
    
    UKantanChartLegend();

    UFUNCTION(BlueprintCallable)
    void SetSeriesPadding(const FMargin& InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetMargins(const FMargin& InMargins);
    
    UFUNCTION(BlueprintCallable)
    void SetFontSize(int32 InFontSize);
    
    UFUNCTION(BlueprintCallable)
    void SetChart(UKantanCartesianChartBase* InChart);
    
    UFUNCTION(BlueprintCallable)
    void SetBackground(const FSlateBrush& InBrush);
    
};

