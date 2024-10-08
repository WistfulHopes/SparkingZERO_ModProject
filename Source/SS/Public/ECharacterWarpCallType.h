#pragma once
#include "CoreMinimal.h"
#include "ECharacterWarpCallType.generated.h"

UENUM(BlueprintType)
enum class ECharacterWarpCallType : uint8 {
    None,
    Impact,
    OneshotDeadly,
};

