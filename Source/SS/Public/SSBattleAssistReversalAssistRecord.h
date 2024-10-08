#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleKey.h"
#include "SSBattleAssistReversalAssistRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleAssistReversalAssistRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratBattleKey> RevengeCounterAssistKeys;
    
    SS_API FSSBattleAssistReversalAssistRecord();
};

