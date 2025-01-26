#pragma once
#include "CoreMinimal.h"
#include "EMapWarpAreaType.generated.h"

UENUM(BlueprintType)
enum class EMapWarpAreaType : uint8 {
    DirectablePoints,
    AirDirectablePoints,
    WallDirectablePoints,
    WaterDirectablePoints,
    SmallDirectablePoints,
    NearByWallAreas,
    WarpLayerdBoxSafeAreaLists,
    WarpLayerdCylinderSafeAreaLists,
    All,
};

