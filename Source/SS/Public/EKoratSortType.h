#pragma once
#include "CoreMinimal.h"
#include "EKoratSortType.generated.h"

UENUM(BlueprintType)
enum class EKoratSortType : uint8 {
    Upper,
    Lower,
    Num,
    Invalid,
};

