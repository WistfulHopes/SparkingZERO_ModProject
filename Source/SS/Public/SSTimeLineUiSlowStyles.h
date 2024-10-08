#pragma once
#include "CoreMinimal.h"
#include "SSTimeLineUiImageStyle.h"
#include "SSTimeLineUiSlowStyles.generated.h"

USTRUCT(BlueprintType)
struct FSSTimeLineUiSlowStyles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiImageStyle SlowArea;
    
    SS_API FSSTimeLineUiSlowStyles();
};

