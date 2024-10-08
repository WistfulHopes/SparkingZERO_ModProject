#pragma once
#include "CoreMinimal.h"
#include "KoratWorldLibBattleIdList.generated.h"

USTRUCT(BlueprintType)
struct FKoratWorldLibBattleIdList {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint64> BattleIdList;
    
    SS_API FKoratWorldLibBattleIdList();
};

