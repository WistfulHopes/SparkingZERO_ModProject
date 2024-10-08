#pragma once
#include "CoreMinimal.h"
#include "ESSCharacterItemTarget.generated.h"

UENUM(BlueprintType)
enum class ESSCharacterItemTarget : uint8 {
    Myself,
    Enemy,
};

