#pragma once
#include "CoreMinimal.h"
#include "KoratBattleReward.h"
#include "KoratBattleRewardDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleRewardDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleReward> BattleReward;
    
    SS_API FKoratBattleRewardDataAssetRecord();
};

