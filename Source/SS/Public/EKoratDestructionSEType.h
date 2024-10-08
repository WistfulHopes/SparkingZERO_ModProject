#pragma once
#include "CoreMinimal.h"
#include "EKoratDestructionSEType.generated.h"

UENUM(BlueprintType)
enum class EKoratDestructionSEType : uint8 {
    None,
    Destruction,
    Hit,
    Collision,
};

