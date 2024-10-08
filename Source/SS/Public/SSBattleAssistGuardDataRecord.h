#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleKey.h"
#include "SSBattleAssistGuardDataRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleAssistGuardDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombativesGuardDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BulletsGuardDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombativesGuardRecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EKoratBattleKey> Keys;
    
    SS_API FSSBattleAssistGuardDataRecord();
};

