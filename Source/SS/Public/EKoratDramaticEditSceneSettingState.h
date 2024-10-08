#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticEditSceneSettingState.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticEditSceneSettingState : uint8 {
    Opening,
    NormalWin,
    NormalLose,
    SpecialWin,
    SpecialLose,
    DirectionEvent,
};

