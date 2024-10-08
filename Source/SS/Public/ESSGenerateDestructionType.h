#pragma once
#include "CoreMinimal.h"
#include "ESSGenerateDestructionType.generated.h"

UENUM(BlueprintType)
enum class ESSGenerateDestructionType : uint8 {
    Tick,
    Trigger,
};

