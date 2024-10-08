#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorInitialSelectUIWindowSelectItemTextConvertType.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleCutEditorInitialSelectUIWindowSelectItemTextConvertType : uint8 {
    None,
    CharacterIndex,
    CharacterSpecify,
    CharacterPose,
    CharacterFacial,
    CharacterEffect,
    SubtitleIndex,
    SubtitleBaseText,
    SubtitleReplaceWord,
};

