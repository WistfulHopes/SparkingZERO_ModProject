#pragma once
#include "CoreMinimal.h"
#include "KoratShopSalesItemDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratShopSalesItemDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratShopSalesItemDataList();
};
FORCEINLINE uint32 GetTypeHash(const FKoratShopSalesItemDataList) { return 0; }

