#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleDirectingKnockDownType.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleDirectingKnockDownType : uint8 {
    None,
    BlastForte,
    BlastSkill,
    BlastUltimate,
};

