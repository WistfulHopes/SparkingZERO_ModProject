#pragma once
#include "CoreMinimal.h"
#include "ESSReplayUIPlayState.generated.h"

UENUM(BlueprintType)
enum class ESSReplayUIPlayState : uint8 {
    None,
    Idle,
    Playing,
    Pausing,
};

