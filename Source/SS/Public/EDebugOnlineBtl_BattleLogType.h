#pragma once
#include "CoreMinimal.h"
#include "EDebugOnlineBtl_BattleLogType.generated.h"

UENUM(BlueprintType)
enum class EDebugOnlineBtl_BattleLogType : uint8 {
    None,
    LightA,
    LightB,
    LightC,
    LightD,
    LightE,
    Count,
};

