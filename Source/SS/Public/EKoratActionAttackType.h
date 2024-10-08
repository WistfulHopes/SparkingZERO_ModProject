#pragma once
#include "CoreMinimal.h"
#include "EKoratActionAttackType.generated.h"

UENUM(BlueprintType)
enum class EKoratActionAttackType : uint8 {
    None,
    EnergyBullet,
    Combatives,
    BlastForte1,
    BlastForte2,
    BlastSkill1,
    BlastSkill2,
    BlastUltimate,
    AttackAction,
    SignCombatives,
    TriggerSonicSway,
};

