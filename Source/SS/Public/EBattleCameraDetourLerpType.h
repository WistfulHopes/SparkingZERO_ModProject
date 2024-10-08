#pragma once
#include "CoreMinimal.h"
#include "EBattleCameraDetourLerpType.generated.h"

UENUM(BlueprintType)
enum class EBattleCameraDetourLerpType : uint8 {
    None,
    Turn,
    Swing,
    SwingBack,
    ZBurst,
    Detour,
    MAX,
};

