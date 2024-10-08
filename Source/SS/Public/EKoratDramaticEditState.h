#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticEditState.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticEditState : uint8 {
    Normal,
    EasyEditing,
    EasyEdited,
};

