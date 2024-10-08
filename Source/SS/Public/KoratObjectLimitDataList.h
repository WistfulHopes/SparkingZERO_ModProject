#pragma once
#include "CoreMinimal.h"
#include "KoratObjectLimitDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratObjectLimitDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratObjectLimitDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratObjectLimitDataList) { return 0; }

