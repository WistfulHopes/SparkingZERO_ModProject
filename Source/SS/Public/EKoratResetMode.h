#pragma once
#include "CoreMinimal.h"
#include "EKoratResetMode.generated.h"

UENUM(BlueprintType)
enum class EKoratResetMode : uint8 {
    None,
    OnlyGameState,
    ForBattle,
    ForBattle_DelChara,
    ForOutGame,
    ForOutGame_DelChara,
};

