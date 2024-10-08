#pragma once
#include "CoreMinimal.h"
#include "EKoratBlowState.generated.h"

UENUM(BlueprintType)
enum class EKoratBlowState : uint8 {
    OFF,
    IN_,
    LP,
    OT,
    BK,
    FallIN,
    FallLP,
    Bound,
    BoundIN,
    BoundOT,
    SlideLP,
    SlideOT,
    CrashToWallIN,
    CrashToWallOT,
    Down,
    DownRevivalIN,
    DownRevivalOT,
    UkemiStandUpIN,
    UkemiStandUpOT,
    Brake,
    Lift,
    Sweep,
    Crumple,
    FallUkemi,
};

