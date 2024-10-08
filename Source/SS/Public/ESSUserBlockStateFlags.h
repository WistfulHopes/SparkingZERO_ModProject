#pragma once
#include "CoreMinimal.h"
#include "ESSUserBlockStateFlags.generated.h"

UENUM(BlueprintType)
enum class ESSUserBlockStateFlags : uint8 {
    Unblocked,
    BlockedByMe,
    BlockedByPeer,
    Restricted = 4,
    BlockedOtherReason = 8,
};

