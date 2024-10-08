#pragma once
#include "CoreMinimal.h"
#include "ETypeOfTerrainToPassToBattleCamera.generated.h"

UENUM(BlueprintType)
enum class ETypeOfTerrainToPassToBattleCamera : uint8 {
    Unknown,
    GroundSurface,
    Wall,
    Air,
};

