#pragma once
#include "CoreMinimal.h"
#include "ESSMissionClassification.generated.h"

UENUM(BlueprintType)
enum class ESSMissionClassification : uint8 {
    Battle,
    Collect,
};

