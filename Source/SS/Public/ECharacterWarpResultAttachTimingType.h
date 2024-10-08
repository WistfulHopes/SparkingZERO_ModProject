#pragma once
#include "CoreMinimal.h"
#include "ECharacterWarpResultAttachTimingType.generated.h"

UENUM(BlueprintType)
enum class ECharacterWarpResultAttachTimingType : uint8 {
    None,
    Immidiate,
    WaitRequest,
};

