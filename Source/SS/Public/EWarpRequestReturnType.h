#pragma once
#include "CoreMinimal.h"
#include "EWarpRequestReturnType.generated.h"

UENUM(BlueprintType)
enum class EWarpRequestReturnType : uint8 {
    ReturnAuto,
    ReturnNone,
    ReturnSafeSmall,
    ReturnSafeGround,
    ReturnSafeGroundFit,
    ReturnSafeAir,
    ReturnSafeLargeGround,
    ReturnSafeLargeAir,
    ReturnSafeLWall,
    MAX,
};

