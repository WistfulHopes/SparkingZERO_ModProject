#pragma once
#include "CoreMinimal.h"
#include "ENotificationTiming.generated.h"

UENUM(BlueprintType)
enum class ENotificationTiming : uint8 {
    None,
    Immediate,
    MainMenu,
    WaitForOrder = 4,
    All = 255,
};

