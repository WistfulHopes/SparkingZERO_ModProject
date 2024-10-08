#pragma once
#include "CoreMinimal.h"
#include "ESSBattleDataIncorrectPlayer.generated.h"

UENUM(BlueprintType)
enum class ESSBattleDataIncorrectPlayer : uint8 {
    None,
    Player1,
    Player2,
    Both,
    Num,
};

