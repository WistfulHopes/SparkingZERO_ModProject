#pragma once
#include "CoreMinimal.h"
#include "SSTimeLineUiScrollBarStyle.h"
#include "SSTimeLineUiScrollBarStyles.generated.h"

USTRUCT(BlueprintType)
struct FSSTimeLineUiScrollBarStyles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiScrollBarStyle Vertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiScrollBarStyle Horizontal;
    
    SS_API FSSTimeLineUiScrollBarStyles();
};

