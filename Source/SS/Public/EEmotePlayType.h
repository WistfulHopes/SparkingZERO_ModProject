#pragma once
#include "CoreMinimal.h"
#include "EEmotePlayType.generated.h"

UENUM(BlueprintType)
enum class EEmotePlayType : uint8 {
    Preview,
    InGame,
    Demo,
};

