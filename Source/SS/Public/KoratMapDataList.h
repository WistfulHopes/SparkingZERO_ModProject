#pragma once
#include "CoreMinimal.h"
#include "KoratMapDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratMapDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratMapDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratMapDataList) { return 0; }

