#pragma once
#include "CoreMinimal.h"
#include "EDebugOnlineBtl_MatchType.generated.h"

UENUM(BlueprintType)
enum class EDebugOnlineBtl_MatchType : uint8 {
    Local1P,
    Local2P,
    OnlineSearch,
    Count,
};

