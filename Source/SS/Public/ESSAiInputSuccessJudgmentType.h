#pragma once
#include "CoreMinimal.h"
#include "ESSAiInputSuccessJudgmentType.generated.h"

UENUM(BlueprintType)
enum class ESSAiInputSuccessJudgmentType : uint8 {
    ActionLabelEnd,
    TimeEnd,
    RangeEnd,
    ImpactEnd,
    ImmediateEnd,
    NoBulletsNearbyEnd,
    SparkingEnd,
    PathMoveEnd,
    SearchMoveEnd,
    ChargeLvEnd,
    DuringAction,
    HeightDifEnd,
    GroundEnd,
    DisablesChargeEnd,
    SpeedImpactOnceInputTiming,
    SpeedImpactRapidInputTiming,
    CrashImpactInputTimingAttack,
    CrashImpactInputTimingDefense,
    Max,
};

