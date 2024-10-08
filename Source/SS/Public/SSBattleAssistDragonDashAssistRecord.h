#pragma once
#include "CoreMinimal.h"
#include "KoratActionDataList.h"
#include "SSBattleAssistDragonDashAssistRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleAssistDragonDashAssistRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DragonDashStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DragonDashSPValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DragonDashAttackDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DragonDashAttackAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DragonDashAttackChargeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratActionDataList> AllowAction;
    
    SS_API FSSBattleAssistDragonDashAssistRecord();
};

