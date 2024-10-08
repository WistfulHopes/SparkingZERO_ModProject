#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBattleExtraDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDramaticBattleExtraDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDramaticBattleExtraDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratDramaticBattleExtraDataList) { return 0; }

