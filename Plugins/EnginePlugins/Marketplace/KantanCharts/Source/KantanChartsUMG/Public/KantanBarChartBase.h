#pragma once
#include "CoreMinimal.h"
#include "CartesianAxisConfig.h"
#include "EKantanBarChartOrientation.h"
#include "EKantanBarLabelPosition.h"
#include "EKantanBarValueExtents.h"
#include "KantanBarChartStyle.h"
#include "KantanCategoryChart.h"
#include "KantanBarChartBase.generated.h"

UCLASS(Abstract, Blueprintable)
class KANTANCHARTSUMG_API UKantanBarChartBase : public UKantanCategoryChart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKantanBarChartStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKantanBarChartOrientation Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBarValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKantanBarLabelPosition LabelPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BarToGapRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKantanBarValueExtents ValueExtentsDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCartesianAxisConfig ValueAxisCfg;
    
    UKantanBarChartBase();

    UFUNCTION(BlueprintCallable)
    void SetValueAxisConfig(const FCartesianAxisConfig& InCfg);
    
    UFUNCTION(BlueprintCallable)
    void SetOrientation(EKantanBarChartOrientation InOrientation);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxBarValue(float InMaxValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLabelPosition(EKantanBarLabelPosition InPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetExtentsDisplay(EKantanBarValueExtents InExtents);
    
    UFUNCTION(BlueprintCallable)
    void SetBarToGapRatio(float InRatio);
    
};

