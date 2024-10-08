#pragma once
#include "CoreMinimal.h"
#include "ECharacterBattleState.generated.h"

UENUM(BlueprintType)
enum class ECharacterBattleState : uint8 {
    Normal,
    PreSparkingRelease,
    PreSparkingMode,
    SparkingMode,
    Stun,
};

