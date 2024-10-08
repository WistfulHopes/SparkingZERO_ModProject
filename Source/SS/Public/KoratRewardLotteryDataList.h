#pragma once
#include "CoreMinimal.h"
#include "KoratRewardLotteryDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratRewardLotteryDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratRewardLotteryDataList();
};

