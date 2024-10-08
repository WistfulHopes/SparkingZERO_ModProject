#pragma once
#include "CoreMinimal.h"
#include "SSTimeLineUiImageStyle.h"
#include "SSTimeLineUiInvalidAreaStyles.generated.h"

USTRUCT(BlueprintType)
struct FSSTimeLineUiInvalidAreaStyles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiImageStyle InvalidArea;
    
    SS_API FSSTimeLineUiInvalidAreaStyles();
};

