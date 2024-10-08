#pragma once
#include "CoreMinimal.h"
#include "ESSDRMEditSocketUseFlags.generated.h"

UENUM()
enum class ESSDRMEditSocketUseFlags : uint8 {
    X = 1,
    Y,
    Z = 4,
    BIT_3 = 8,
    BIT_4 = 16,
    BIT_5 = 32,
    BIT_6 = 64,
    BIT_7 = 128,
};

