#pragma once
#include "CoreMinimal.h"
#include "SSBattleAssistPursuitAssistRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleAssistPursuitAssistRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PursuitAssistDownHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PursuitAssistUPHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PursuitAssistDragonSmashDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PursuitAssistDragonSmashSafeTime;
    
    SS_API FSSBattleAssistPursuitAssistRecord();
};

