#pragma once
#include "CoreMinimal.h"
#include "EKoratBlastSlotType.generated.h"

UENUM(BlueprintType)
enum class EKoratBlastSlotType : uint8 {
    None,
    BlastForte1,
    BlastForte2,
    BlastSkill1,
    BlastSkill2,
    BlastUltimate,
};

