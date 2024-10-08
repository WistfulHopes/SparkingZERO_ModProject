#pragma once
#include "CoreMinimal.h"
#include "EPlayerBlockState.generated.h"

UENUM(BlueprintType)
enum class EPlayerBlockState : uint8 {
    Unblocked,
    BlockedByMe,
    BlockedByPeer,
    Restricted = 4,
    BlockedOtherReason = 8,
};

