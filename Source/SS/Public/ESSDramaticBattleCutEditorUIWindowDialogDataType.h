#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorUIWindowDialogDataType.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleCutEditorUIWindowDialogDataType : uint8 {
    None,
    TestFinish,
    NoActionName,
    CannotExchangeCharacter,
};

