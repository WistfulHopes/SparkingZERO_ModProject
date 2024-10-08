#pragma once
#include "CoreMinimal.h"
#include "EMapAreaEditType.generated.h"

UENUM(BlueprintType)
enum class EMapAreaEditType : uint8 {
    None,
    DirectableArea,
    AirDirectableArea,
    NearByWallArea,
    WallDirectableArea,
    WaterDirectableArea,
    SmallDirectableArea,
    SafeAreaBox,
    SafeAreaCylinder,
};

