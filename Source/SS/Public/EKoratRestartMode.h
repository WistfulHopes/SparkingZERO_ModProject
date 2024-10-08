#pragma once
#include "CoreMinimal.h"
#include "EKoratRestartMode.generated.h"

UENUM(BlueprintType)
enum class EKoratRestartMode : uint8 {
    None,
    ForBattle,
    ForOutGame,
};

