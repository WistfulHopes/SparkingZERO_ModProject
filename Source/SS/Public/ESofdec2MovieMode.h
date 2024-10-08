#pragma once
#include "CoreMinimal.h"
#include "ESofdec2MovieMode.generated.h"

UENUM(BlueprintType)
enum class ESofdec2MovieMode : uint8 {
    ESofdec2MovieModeNon,
    ESofdec2MovieModePlay,
    ESofdec2MovieModeStop,
    ESofdec2MovieModePause,
    ESofdec2MovieModeEnd,
};

