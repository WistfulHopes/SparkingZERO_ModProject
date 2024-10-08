#pragma once
#include "CoreMinimal.h"
#include "KoratBattlePlayMap.h"
#include "KoratBattleResult.h"
#include "KoratMissionRequiredData.generated.h"

USTRUCT(BlueprintType)
struct FKoratMissionRequiredData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnlineBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleResult BattleResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattlePlayMap BattleMap;
    
    SS_API FKoratMissionRequiredData();
};

