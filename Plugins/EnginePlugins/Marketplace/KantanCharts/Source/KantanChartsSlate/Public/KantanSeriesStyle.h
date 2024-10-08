#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KantanSeriesStyle.generated.h"

class UKantanPointStyle;

USTRUCT(BlueprintType)
struct FKantanSeriesStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StyleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKantanPointStyle* PointStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    KANTANCHARTSSLATE_API FKantanSeriesStyle();
};

