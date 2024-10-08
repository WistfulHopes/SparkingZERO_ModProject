#pragma once
#include "CoreMinimal.h"
#include "EKoratActionCategoryType.generated.h"

UENUM(BlueprintType)
enum class EKoratActionCategoryType : uint8 {
    WaitOrMove,
    PreliminaryOperation,
    Rush,
    RushDerivative,
    Smash,
    Kiadn,
    Jump,
    JumpDerivation,
    UniqueMovement,
    UniqueMoveDerivation,
    Pursuit,
    UniqueAttack,
    UniqueAction,
    Steps,
    StepDerivation,
    Guard,
    Counter,
    CounterDerivation,
    HighCounter,
    OpposeEnergyBullet,
    Interrupt,
    SpeedImpact,
    BlastImpact,
    PowerImpact,
    CrashImpact,
    BaseReaction,
    BlownReaction,
    ArmorReaction,
    UniqueReaction,
    Bound,
    Down,
    DownRevival,
    GuardClear,
    Directing,
};

