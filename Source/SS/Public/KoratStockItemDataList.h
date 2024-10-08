#pragma once
#include "CoreMinimal.h"
#include "KoratStockItemDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratStockItemDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratStockItemDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratStockItemDataList) { return 0; }

