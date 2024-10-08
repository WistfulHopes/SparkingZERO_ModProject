#pragma once
#include "CoreMinimal.h"
#include "EKoratInequalitySignType.generated.h"

UENUM(BlueprintType)
enum class EKoratInequalitySignType : uint8 {
    Equal,
    NotLessThan,
    NoMoreThan,
    LessThan,
    MoreThan,
};

