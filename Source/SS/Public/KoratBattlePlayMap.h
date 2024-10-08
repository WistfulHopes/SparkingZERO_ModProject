#pragma once
#include "CoreMinimal.h"
#include "KoratMapDataList.h"
#include "KoratBattlePlayMap.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattlePlayMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapDataList Map;
    
    SS_API FKoratBattlePlayMap();
};

