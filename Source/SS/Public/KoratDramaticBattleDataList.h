#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBattleDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDramaticBattleDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDramaticBattleDataList();
};

