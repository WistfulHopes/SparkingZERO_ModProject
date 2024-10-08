#pragma once
#include "CoreMinimal.h"
#include "ECharacterWarpReturnType.generated.h"

UENUM(BlueprintType)
enum class ECharacterWarpReturnType : uint8 {
    None,
    KeepFinishDistance,
};

