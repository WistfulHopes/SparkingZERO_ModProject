#pragma once
#include "CoreMinimal.h"
#include "EKoratNotEnoughPoolObjectsType.generated.h"

UENUM(BlueprintType)
enum class EKoratNotEnoughPoolObjectsType : uint8 {
    None,
    AutoIncreate,
};

