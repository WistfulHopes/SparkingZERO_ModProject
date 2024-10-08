#pragma once
#include "CoreMinimal.h"
#include "KoratShopSalesItemDataList.h"
#include "SSShopPurchasedInfoKPI.generated.h"

USTRUCT(BlueprintType)
struct FSSShopPurchasedInfoKPI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FKoratShopSalesItemDataList, int32> PurchasedShopSaleItems;
    
    SS_API FSSShopPurchasedInfoKPI();
};

