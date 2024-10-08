#pragma once
#include "CoreMinimal.h"
#include "ECharacterWarpAfterDirectionType.generated.h"

UENUM(BlueprintType)
enum class ECharacterWarpAfterDirectionType : uint8 {
    None,
    MapCenter,
    DirectDirection,
    Facing,
    LookAtCannonActor,
    LookAtDirectPosition,
    CopyDirectTransform,
};

