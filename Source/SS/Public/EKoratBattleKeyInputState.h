#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleKeyInputState.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleKeyInputState : uint8 {
    JustPressed,
    JustReleased,
    Down,
};

