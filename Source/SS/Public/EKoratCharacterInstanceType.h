#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterInstanceType.generated.h"

UENUM(BlueprintType)
enum class EKoratCharacterInstanceType : uint8 {
    Battle,
    Support,
    EventUI,
};

