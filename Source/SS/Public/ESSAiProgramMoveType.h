#pragma once
#include "CoreMinimal.h"
#include "ESSAiProgramMoveType.generated.h"

UENUM(BlueprintType)
enum class ESSAiProgramMoveType : uint8 {
    None,
    DragonDashMove,
    PathMove,
    PathDragonDash,
    SearchMove,
    SearchDragonDash,
    SearchAlignTheYaxisOfTheRStickWithTheTarget,
    Max,
};

