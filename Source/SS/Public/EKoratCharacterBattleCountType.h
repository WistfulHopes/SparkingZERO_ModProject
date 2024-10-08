#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterBattleCountType.generated.h"

UENUM(BlueprintType)
enum class EKoratCharacterBattleCountType : uint8 {
    ZCounter,
    SuperCounterCount,
    ShotEnergyBulletCount,
    ReflectEnergyBulletCount,
    ChargeCount,
    SparkingCount,
    ThrowCount,
    GuardCount,
    EXACount,
    SPMCount,
    ULTCount,
    SpeedImpactCount,
    BlastImpactCount,
    PowerImpactCount,
    CrashImpactCount,
    SpeedImpactWinCount,
    BlastImpactWinCount,
    PowerImpactWinCount,
    CrashImpactWinCount,
    EmoteCount,
    VanishingAttack,
    DragonHoming,
    LightningAttack,
    RevengeCounter,
    SparkingCombo,
    Transform,
    DramaticFinish,
    SpecialFatePreBattleProduction,
    Num,
};

