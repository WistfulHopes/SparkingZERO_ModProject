#pragma once
#include "CoreMinimal.h"
#include "SSTimeLineUiImageStyle.h"
#include "SSTimeLineUiLineStyle.h"
#include "SSTimeLineUiPlayHeadStyles.generated.h"

USTRUCT(BlueprintType)
struct FSSTimeLineUiPlayHeadStyles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiImageStyle TopMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiLineStyle Line;
    
    SS_API FSSTimeLineUiPlayHeadStyles();
};

