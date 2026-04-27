#pragma once
#include "CoreMinimal.h"
#include "SSModeNSRVictoryRecoveryAmount.h"
#include "SSModeNSRVictoryRecoveryRule.generated.h"

USTRUCT(BlueprintType)
struct FSSModeNSRVictoryRecoveryRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSModeNSRVictoryRecoveryAmount> Single;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSModeNSRVictoryRecoveryAmount> Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> DpMultiplierMap;
    
    SS_API FSSModeNSRVictoryRecoveryRule();
};

