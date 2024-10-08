#pragma once
#include "CoreMinimal.h"
#include "ENotificationMode.generated.h"

UENUM(BlueprintType)
enum class ENotificationMode : uint8 {
    Normal,
    Critical,
};

