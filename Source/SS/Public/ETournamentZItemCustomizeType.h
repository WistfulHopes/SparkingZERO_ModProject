#pragma once
#include "CoreMinimal.h"
#include "ETournamentZItemCustomizeType.generated.h"

UENUM(BlueprintType)
enum class ETournamentZItemCustomizeType : uint8 {
    Enable,
    Disable,
    Random,
};

