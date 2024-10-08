#pragma once
#include "CoreMinimal.h"
#include "ESSShopItemSaleState.generated.h"

UENUM(BlueprintType)
enum class ESSShopItemSaleState : uint8 {
    Sales,
    NotSale,
};

