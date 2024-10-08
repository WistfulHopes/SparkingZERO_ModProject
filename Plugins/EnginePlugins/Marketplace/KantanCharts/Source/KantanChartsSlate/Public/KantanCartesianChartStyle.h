#pragma once
#include "CoreMinimal.h"
#include "KantanChartStyle.h"
#include "KantanCartesianChartStyle.generated.h"

USTRUCT(BlueprintType)
struct FKantanCartesianChartStyle : public FKantanChartStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DataOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DataLineThickness;
    
    KANTANCHARTSSLATE_API FKantanCartesianChartStyle();
};

