#pragma once
#include "CoreMinimal.h"
#include "KoratRewardDataList.h"
#include "KoratBattleRewardRandom.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleRewardRandom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratRewardDataList RewardData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
    SS_API FKoratBattleRewardRandom();
};

