#pragma once
#include "CoreMinimal.h"
#include "ECharacterWarpIndependRequestType.generated.h"

UENUM(BlueprintType)
enum class ECharacterWarpIndependRequestType : uint8 {
    None,
    AttachSelf,
    AttachOther,
    Finish,
    ReturnStartPosition,
    ReturnToStartPositionTogather,
    MoveToDirectableArea,
    MoveToDirectableAreaGround,
    MoveToDirectableAreaAir,
};

