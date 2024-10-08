#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleDirectingAction.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleDirectingAction : uint8 {
    None,
    BlastForte_1,
    BlastForte_2,
    BlastSkill_1,
    BlastSkill_2,
    BlastUltimate,
    Sparking,
    PowerImpact,
    BrastImpact,
    CrashImpact,
    SpeadImpact,
    Emote,
};

