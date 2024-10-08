#pragma once
#include "CoreMinimal.h"
#include "EKoratPostProcessPlayerID.generated.h"

UENUM(BlueprintType)
enum class EKoratPostProcessPlayerID : uint8 {
    PLAYER_1P,
    PLAYER_2P,
    MAX,
    NONE,
};

