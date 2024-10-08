#pragma once
#include "CoreMinimal.h"
#include "EKoratDirection.generated.h"

UENUM(BlueprintType)
enum class EKoratDirection : uint8 {
    Front,
    Upper,
    Under,
    Left,
    Right,
};

