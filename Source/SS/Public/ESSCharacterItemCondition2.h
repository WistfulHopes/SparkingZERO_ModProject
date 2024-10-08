#pragma once
#include "CoreMinimal.h"
#include "ESSCharacterItemCondition2.generated.h"

UENUM(BlueprintType)
enum class ESSCharacterItemCondition2 : uint8 {
    None,
    InMap,
    HPPer,
    SPPer = 4,
    StockNum = 8,
    Gender = 16,
    DP = 32,
};

