#pragma once
#include "CoreMinimal.h"
#include "EKoratPostProcessAgentActorBindType.generated.h"

UENUM(BlueprintType)
enum class EKoratPostProcessAgentActorBindType : uint8 {
    LEVEL,
    CHARACTER,
    DYNAMIC,
    RESIDENT,
    MAX,
};

