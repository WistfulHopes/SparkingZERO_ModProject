#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterFlyChangeType.generated.h"

UENUM(BlueprintType)
enum class EKoratCharacterFlyChangeType : uint8 {
    None,
    CanFly,
    CannotFly,
};

