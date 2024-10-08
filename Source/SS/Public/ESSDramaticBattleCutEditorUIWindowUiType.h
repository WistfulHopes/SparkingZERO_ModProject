#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorUIWindowUiType.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleCutEditorUIWindowUiType : uint8 {
    None,
    EditWindow,
    EditWindowButton,
    EditWindowLabel,
    PreviewPanel,
    GeneralDialog,
    ButtonGuide,
    InitialSelectCutSelect,
    InitialSelect3DSelect,
    InitialSelect3DButton,
    InitialSelect2DSelect,
    InitialSelect2DButton,
};

