#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateBrush.h"
#include "Fonts/SlateFontInfo.h"
#include "Styling/SlateWidgetStyle.h"
#include "KantanChartStyle.generated.h"

USTRUCT(BlueprintType)
struct FKantanChartStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ChartLineColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChartLineThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo BaseFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TitleFontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AxisDescriptionFontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AxisValueFontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FontColor;
    
    KANTANCHARTSSLATE_API FKantanChartStyle();
};

