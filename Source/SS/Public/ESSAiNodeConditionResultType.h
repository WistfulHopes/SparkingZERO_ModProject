#pragma once
#include "CoreMinimal.h"
#include "ESSAiNodeConditionResultType.generated.h"

UENUM(BlueprintType)
enum class ESSAiNodeConditionResultType : uint8 {
    None,
    ResultTrue,
    ResultFalse,
};

