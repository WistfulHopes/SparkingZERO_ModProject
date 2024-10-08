#pragma once
#include "CoreMinimal.h"
#include "EBulletManagerGroupType.generated.h"

UENUM(BlueprintType)
enum class EBulletManagerGroupType : uint8 {
    SKILL1,
    SKILL2,
    ULTBLAST,
    BLAST_GENERAL,
    BIMPACT,
    BIMPACT_FIRE,
    BIMPACT_PHASE,
    BIMPACT_WIN,
    BIMPACT_LOST,
    Max,
};

