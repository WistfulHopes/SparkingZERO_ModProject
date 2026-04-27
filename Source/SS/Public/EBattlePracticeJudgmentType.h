#pragma once
#include "CoreMinimal.h"
#include "EBattlePracticeJudgmentType.generated.h"

UENUM(BlueprintType)
enum class EBattlePracticeJudgmentType : uint8 {
    None,
    ActionPlayed,
    AttackHits,
    DamageReceived,
    GuardCrash,
    ActionMove,
    ActionAvoid,
    SectionChanged,
    ActionElapsedTime,
};

