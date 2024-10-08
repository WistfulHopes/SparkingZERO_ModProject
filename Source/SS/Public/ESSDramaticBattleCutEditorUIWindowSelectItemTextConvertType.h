#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorUIWindowSelectItemTextConvertType.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleCutEditorUIWindowSelectItemTextConvertType : uint8 {
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

