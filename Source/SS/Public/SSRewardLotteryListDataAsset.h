#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSRewardLotteryListDataAsset.generated.h"

class USSRewardLotteryTableDataAsset;

UCLASS(Blueprintable)
class USSRewardLotteryListDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSRewardLotteryTableDataAsset*> PtrRecords;
    
    USSRewardLotteryListDataAsset();

};

