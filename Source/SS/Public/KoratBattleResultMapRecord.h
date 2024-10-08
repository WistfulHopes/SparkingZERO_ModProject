#pragma once
#include "CoreMinimal.h"
#include "KoratMapBattleCount.h"
#include "KoratBattleResultMapRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleResultMapRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapBattleCount BattleCount;
    
    SS_API FKoratBattleResultMapRecord();
};

