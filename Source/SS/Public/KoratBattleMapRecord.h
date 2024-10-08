#pragma once
#include "CoreMinimal.h"
#include "KoratMapBattleCount.h"
#include "KoratBattleMapRecord.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratBattleMapRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapBattleCount StagingCount;
    
    FKoratBattleMapRecord();
};

