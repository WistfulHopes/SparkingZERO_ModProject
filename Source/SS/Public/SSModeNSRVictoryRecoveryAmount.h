#pragma once
#include "CoreMinimal.h"
#include "SSModeNSRVictoryRecoveryAmount.generated.h"

USTRUCT(BlueprintType)
struct FSSModeNSRVictoryRecoveryAmount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HpValue;
    
    SS_API FSSModeNSRVictoryRecoveryAmount();
};

