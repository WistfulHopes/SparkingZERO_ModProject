#pragma once
#include "CoreMinimal.h"
#include "ESSPowerImpactLevelSequenceType.generated.h"

UENUM(BlueprintType)
enum class ESSPowerImpactLevelSequenceType : uint8 {
    kSequencePrepare,
    kSequenceCompeteLV1,
    kSequenceCompeteLV2,
    kSequenceCompeteLV3,
    kSequenceEnd,
};

