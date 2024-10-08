#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSRewardLotteryElement.h"
#include "SSRewardLotteryTableDataAsset.generated.h"

UCLASS(Blueprintable)
class USSRewardLotteryTableDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSRewardLotteryElement> RewardList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LotteryCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowDuplication;
    
    USSRewardLotteryTableDataAsset();

};

