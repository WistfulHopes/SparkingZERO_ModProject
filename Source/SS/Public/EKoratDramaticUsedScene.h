#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticUsedScene.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticUsedScene : uint8 {
    None,
    Opening,
    NormalWin,
    NormalLose,
    Max,
};

