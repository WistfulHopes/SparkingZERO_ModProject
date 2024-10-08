#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleRewardClearCondition.h"
#include "EKoratBattleRewardMode.h"
#include "KoratBattleRewardRandom.h"
#include "KoratRewardDataList.h"
#include "KoratBattleReward.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleRewardMode RewardMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratRewardDataList RewardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleRewardRandom> RewardDataRandom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AcquisitionStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HowMmnyTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratBattleRewardClearCondition ClearCondition;
    
    SS_API FKoratBattleReward();
};

