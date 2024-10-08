#pragma once
#include "CoreMinimal.h"
#include "SSWishComeTrueRewardData.h"
#include "SSWishComeTrueContentDetails.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSWishComeTrueContentDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSWishComeTrueRewardData> RewardList;
    
    FSSWishComeTrueContentDetails();
};

