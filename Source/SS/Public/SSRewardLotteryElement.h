#pragma once
#include "CoreMinimal.h"
#include "KoratRewardDataList.h"
#include "SSRewardLotteryElement.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSRewardLotteryElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratRewardDataList RewardId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    FSSRewardLotteryElement();
};

