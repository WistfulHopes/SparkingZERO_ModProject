#pragma once
#include "CoreMinimal.h"
#include "ETournamentTimeLimit.generated.h"

UENUM(BlueprintType)
enum class ETournamentTimeLimit : uint8 {
    Time180,
    Time360,
    Time600,
};

