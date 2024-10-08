#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticEditCutConsistency.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticEditCutConsistency : uint8 {
    None,
    Match,
    TempAssemble,
    Failure,
};

