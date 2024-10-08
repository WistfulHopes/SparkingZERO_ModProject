#pragma once
#include "CoreMinimal.h"
#include "EWarpRequestType.generated.h"

UENUM(BlueprintType)
enum class EWarpRequestType : uint8 {
    Auto,
    ForceSafeGround,
    ForceSafeGroundFit,
    ForceSafeAir,
    ForceSafeAuto,
    ForceLargeSafeGround,
    ForceLargeSafeAir,
    ForceLargeSafeAuto,
    ForceDifferenceGround,
    ForceDifferenceAir,
    ForceDifferenceAuto,
    ForceWall,
    ForceSmall,
    ForceDisable,
    DelegeteImpactProcedure,
    MAX,
};

