#pragma once
#include "CoreMinimal.h"
#include "KoratRewardDataList.h"
#include "SSWishComeTrueRewardData.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSWishComeTrueRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratRewardDataList RewardId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText caption;
    
    FSSWishComeTrueRewardData();
};

