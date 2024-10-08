#pragma once
#include "CoreMinimal.h"
#include "EDebugOnlineBtl_ServerApiType.generated.h"

UENUM(BlueprintType)
enum class EDebugOnlineBtl_ServerApiType : uint8 {
    DummyAuth,
    Skip,
    Normal,
    Count,
};

