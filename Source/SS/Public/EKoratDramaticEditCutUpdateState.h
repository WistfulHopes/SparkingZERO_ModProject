#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticEditCutUpdateState.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticEditCutUpdateState : uint8 {
    None,
    Interrupt,
    Complete,
};

