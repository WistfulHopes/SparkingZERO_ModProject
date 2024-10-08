#pragma once
#include "CoreMinimal.h"
#include "EKoratGuardDirection.generated.h"

UENUM(BlueprintType)
enum class EKoratGuardDirection : uint8 {
    None,
    High,
    Middle,
    Low,
};

