#pragma once
#include "CoreMinimal.h"
#include "EBattleSetupLargeFigureType.generated.h"

UENUM(BlueprintType)
enum class EBattleSetupLargeFigureType : uint8 {
    Normal,
    Large,
    SuperLarge,
    MAX,
};

