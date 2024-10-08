#pragma once
#include "CoreMinimal.h"
#include "KoratBattleDirectingInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleDirectingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleRewardCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FinishBattleDirectingsNo;
    
    SS_API FKoratBattleDirectingInfo();
};

