#pragma once
#include "CoreMinimal.h"
#include "EDebugVirtualNetPlayerRoleType.generated.h"

UENUM(BlueprintType)
enum class EDebugVirtualNetPlayerRoleType : uint8 {
    Off,
    Host,
    Guest,
};

