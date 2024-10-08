#pragma once
#include "CoreMinimal.h"
#include "EAreaEditorUndoActionType.generated.h"

UENUM(BlueprintType)
enum class EAreaEditorUndoActionType : uint8 {
    RemoveArea,
    FitGround,
    None,
};

