#pragma once
#include "CoreMinimal.h"
#include "ESSWLibBattleSortType.generated.h"

UENUM(BlueprintType)
enum class ESSWLibBattleSortType : uint8 {
    None,
    PostedTime,
    Good,
    Favorite,
    Play,
    Replay,
};

