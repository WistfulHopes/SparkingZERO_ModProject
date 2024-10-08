#pragma once
#include "CoreMinimal.h"
#include "ESSCurrencyType.generated.h"

UENUM(BlueprintType)
enum class ESSCurrencyType : uint8 {
    None,
    Money,
    RewardPoint,
};

