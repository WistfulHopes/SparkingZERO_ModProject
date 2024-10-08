#pragma once
#include "CoreMinimal.h"
#include "KoratAuraLevelDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratAuraLevelDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratAuraLevelDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratAuraLevelDataList) { return 0; }

