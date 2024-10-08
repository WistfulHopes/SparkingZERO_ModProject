#pragma once
#include "CoreMinimal.h"
#include "EKoratSuperZCounterType.generated.h"

UENUM(BlueprintType)
enum class EKoratSuperZCounterType : uint8 {
    None,
    Repel,
    Erase,
    RepelOnly,
};

