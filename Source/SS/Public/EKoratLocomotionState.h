#pragma once
#include "CoreMinimal.h"
#include "EKoratLocomotionState.generated.h"

UENUM(BlueprintType)
enum class EKoratLocomotionState : uint8 {
    IdleMove,
    ShortDash,
    Jump,
    Step,
    DragonDash,
    Blow,
    DragonHoming,
    ZBurstDash,
    RevengeDash,
    DashUpDown,
    WallUkemi,
    DashUkemi,
    StunReaction,
    BurstSmash,
    HighSpeedMove,
    SuperHighSpeedMove,
    SuperHighSpeedMoveStr,
    MoveStandUp,
    BlastSkill1Dash,
    BlastSkill2Dash,
    BlastUltimateDash,
    NumbReaction,
};

