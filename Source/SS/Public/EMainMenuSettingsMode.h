#pragma once
#include "CoreMinimal.h"
#include "EMainMenuSettingsMode.generated.h"

UENUM(BlueprintType)
enum class EMainMenuSettingsMode : uint8 {
    MatchingCondition,
    RoomSearch,
    RoomCreate,
};

