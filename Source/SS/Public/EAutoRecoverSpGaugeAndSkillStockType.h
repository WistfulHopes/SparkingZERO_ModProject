#pragma once
#include "CoreMinimal.h"
#include "EAutoRecoverSpGaugeAndSkillStockType.generated.h"

UENUM(BlueprintType)
enum class EAutoRecoverSpGaugeAndSkillStockType : uint8 {
    None,
    Start,
    Stop,
};

