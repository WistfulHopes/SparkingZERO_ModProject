#pragma once
#include "CoreMinimal.h"
#include "ESSReplayUICamera.generated.h"

UENUM(BlueprintType)
enum class ESSReplayUICamera : uint8 {
    None,
    Player,
    Oponent,
    Spectator,
};

