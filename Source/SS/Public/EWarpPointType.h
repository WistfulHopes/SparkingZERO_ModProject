#pragma once
#include "CoreMinimal.h"
#include "EWarpPointType.generated.h"

UENUM(BlueprintType)
enum class EWarpPointType : uint8 {
    PlayerStart,
    PointActor,
    TraceLocator,
    None,
};

