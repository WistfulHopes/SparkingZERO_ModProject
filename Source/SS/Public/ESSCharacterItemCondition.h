#pragma once
#include "CoreMinimal.h"
#include "ESSCharacterItemCondition.generated.h"

UENUM(BlueprintType)
enum class ESSCharacterItemCondition : uint8 {
    None,
    InWater,
    Sparkig,
    AtBattleStart = 4,
    AtCharacterEntry = 8,
    AtFastAvoidanceBlast = 16,
};

