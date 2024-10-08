#pragma once
#include "CoreMinimal.h"
#include "EMainMenuListButtonBehaviour.generated.h"

UENUM(BlueprintType)
enum class EMainMenuListButtonBehaviour : uint8 {
    None,
    OpenNextList,
    LevelTransition,
    LevelTransitionWithDialog,
    OpenWidget,
    QuickMatch,
    Max,
};

