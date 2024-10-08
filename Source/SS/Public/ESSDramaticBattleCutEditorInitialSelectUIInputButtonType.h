#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorInitialSelectUIInputButtonType.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleCutEditorInitialSelectUIInputButtonType : uint8 {
    None,
    ChangeFilterLeft,
    ChangeFilterRight,
    PlayBGM,
};

