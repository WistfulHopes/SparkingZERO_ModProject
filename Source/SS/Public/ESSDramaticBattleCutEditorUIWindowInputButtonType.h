#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorUIWindowInputButtonType.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleCutEditorUIWindowInputButtonType : uint8 {
    None,
    ChangeFilterLeft,
    ChangeFilterRight,
    PlayBGM,
};

