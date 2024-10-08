#pragma once
#include "CoreMinimal.h"
#include "SSTimeLineUiImageStyle.h"
#include "SSTimeLineUiTextStyle.h"
#include "SSTimeLineUiLaneBarStyle.generated.h"

USTRUCT(BlueprintType)
struct FSSTimeLineUiLaneBarStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiImageStyle Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiTextStyle Text;
    
    SS_API FSSTimeLineUiLaneBarStyle();
};

