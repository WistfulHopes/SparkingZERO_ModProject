#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterUIActionFootIKMode.generated.h"

UENUM(BlueprintType)
enum class EKoratCharacterUIActionFootIKMode : uint8 {
    NotSet,
    Disable,
    EnableFlying,
    EnableWalking,
};

