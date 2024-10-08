#pragma once
#include "CoreMinimal.h"
#include "ESSMapLoadType.generated.h"

UENUM(BlueprintType)
enum class ESSMapLoadType : uint8 {
    None,
    Swap,
    SwapBattleMap,
};

