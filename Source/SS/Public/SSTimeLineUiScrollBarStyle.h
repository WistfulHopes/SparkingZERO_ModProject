#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "Styling/SlateTypes.h"
#include "SSTimeLineUiScrollBarStyle.generated.h"

USTRUCT(BlueprintType)
struct FSSTimeLineUiScrollBarStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollBarStyle ScrollBarStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Thickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Padding;
    
    SS_API FSSTimeLineUiScrollBarStyle();
};

