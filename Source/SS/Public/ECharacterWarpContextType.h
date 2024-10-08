#pragma once
#include "CoreMinimal.h"
#include "ECharacterWarpContextType.generated.h"

UENUM(BlueprintType)
enum class ECharacterWarpContextType : uint8 {
    Normal,
    Impact,
    OneshotDeadly,
};

