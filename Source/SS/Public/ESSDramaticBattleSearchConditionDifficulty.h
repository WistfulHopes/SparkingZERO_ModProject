#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleSearchConditionDifficulty.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleSearchConditionDifficulty : uint8 {
    Invalid,
    None,
    Level00,
    Level10,
    Level20,
    Level30,
};

