#pragma once
#include "CoreMinimal.h"
#include "ESSFollowType.generated.h"

UENUM(BlueprintType)
enum class ESSFollowType : uint8 {
    None,
    Follow,
    Rival,
};

