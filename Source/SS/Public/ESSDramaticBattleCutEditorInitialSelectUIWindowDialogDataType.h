#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorInitialSelectUIWindowDialogDataType.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleCutEditorInitialSelectUIWindowDialogDataType : uint8 {
    None,
    TestFinish,
    NoActionName,
    CannotExchangeCharacter,
};

