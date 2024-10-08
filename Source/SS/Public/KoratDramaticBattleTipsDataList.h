#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticBattleTipsDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDramaticBattleTipsDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratDramaticBattleTipsDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratDramaticBattleTipsDataList) { return 0; }

