#pragma once
#include "CoreMinimal.h"
#include "ECharacterWarpLinkType.generated.h"

UENUM(BlueprintType)
enum class ECharacterWarpLinkType : uint8 {
    None,
    ToSelf,
    ToOther,
    ToCannonActor,
    DirectTransform,
    DirectPosition,
    OtherSpace,
};

