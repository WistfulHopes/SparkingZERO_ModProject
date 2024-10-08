#pragma once
#include "CoreMinimal.h"
#include "EKoratEffectToonPointLightTargetType.generated.h"

UENUM(BlueprintType)
enum class EKoratEffectToonPointLightTargetType : uint8 {
    Everyone,
    Myself,
    Others,
};

