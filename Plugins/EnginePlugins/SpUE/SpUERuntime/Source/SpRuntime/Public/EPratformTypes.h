#pragma once
#include "CoreMinimal.h"
#include "EPratformTypes.generated.h"

UENUM()
enum class EPratformTypes : int32 {
    None,
    Windows,
    PS4,
    PS5 = 4,
    XboxOne = 8,
    XboxSX = 16,
    Switch = 32,
    PlayStation = 6,
    Xbox = 24,
    All = 63,
};

