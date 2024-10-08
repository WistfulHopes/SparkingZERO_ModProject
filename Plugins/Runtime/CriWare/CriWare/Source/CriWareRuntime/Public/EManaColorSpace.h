#pragma once
#include "CoreMinimal.h"
#include "EManaColorSpace.generated.h"

UENUM(BlueprintType)
enum class EManaColorSpace : uint8 {
    Rec601,
    Rec601Full,
    Rec709,
    Rec709Full,
    Num,
};

