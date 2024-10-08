#pragma once
#include "CoreMinimal.h"
#include "SSTimeLineUiLaneBarStyle.h"
#include "SSTimeLineUiTextStyle.h"
#include "SSTimeLineUiLaneBarStyles.generated.h"

USTRUCT(BlueprintType)
struct FSSTimeLineUiLaneBarStyles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiLaneBarStyle Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiLaneBarStyle Select;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiLaneBarStyle Tree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSTimeLineUiTextStyle Text;
    
    SS_API FSSTimeLineUiLaneBarStyles();
};

