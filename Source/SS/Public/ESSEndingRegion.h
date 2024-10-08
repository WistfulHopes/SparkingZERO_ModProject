#pragma once
#include "CoreMinimal.h"
#include "ESSEndingRegion.generated.h"

UENUM(BlueprintType)
enum class ESSEndingRegion : uint8 {
    None,
    AS,
    US,
    EU,
};

