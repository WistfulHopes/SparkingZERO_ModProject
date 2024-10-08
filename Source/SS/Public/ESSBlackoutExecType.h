#pragma once
#include "CoreMinimal.h"
#include "ESSBlackoutExecType.generated.h"

UENUM(BlueprintType)
enum class ESSBlackoutExecType : uint8 {
    None,
    Start,
    End,
};

