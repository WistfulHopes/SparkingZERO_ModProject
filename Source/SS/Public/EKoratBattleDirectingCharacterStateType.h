#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleDirectingCharacterStateType.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleDirectingCharacterStateType : uint8 {
    None,
    ZSearchOn,
    ZSearchOff,
    FormChanged,
    Sparking,
    SparkingEnd,
    CostumeDamaged,
    Damage,
    GuardedDamage,
    SelfDamage,
    Down,
    SleepParalysis,
    SleepParalysisEnd,
    KnockDown,
    AscertainSuccess,
    SuperAscertainSuccess,
    NoHit_EnergyBullet,
    NoHit_RushEnergyBullet,
    NoHit_SmashEnergyBullet,
    NoHit_Combatives,
    NoHit_RushCombatives,
    NoHit_SmashCombatives,
    NoHit_BlastForte1,
    NoHit_BlastForte2,
    NoHit_BlastSkill1,
    NoHit_BlastSkill2,
    NoHit_BlastUltimate,
    NoHit_PowerImpactTrigger,
    NoHit_CrashImpactTrigger,
    NoHit_SpeedImpactTrigger,
    NoHit_BlastImpactTrigger,
    SunFist,
    SunFistEnd,
};

