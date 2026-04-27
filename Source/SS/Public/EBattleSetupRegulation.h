#pragma once
#include "CoreMinimal.h"
#include "EBattleSetupRegulation.generated.h"

UENUM(BlueprintType)
enum class EBattleSetupRegulation : uint8 {
    CharaRestriction,
    ItemRestriction,
    NoItem,
    ComboPowerup,
    CharaSameDP,
    MAX,
};

