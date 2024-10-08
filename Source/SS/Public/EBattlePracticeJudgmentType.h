#pragma once
#include "CoreMinimal.h"
#include "EBattlePracticeJudgmentType.generated.h"

UENUM(BlueprintType)
enum class EBattlePracticeJudgmentType : uint8 {
    None,
    ActionPlayed,
    AttackHits,
    GuardCrash,
    ActionMove,
    ActionAvoid,
    SectionChanged,
};

