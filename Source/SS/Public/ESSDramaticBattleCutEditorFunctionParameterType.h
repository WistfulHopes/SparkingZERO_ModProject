#pragma once
#include "CoreMinimal.h"
#include "ESSDramaticBattleCutEditorFunctionParameterType.generated.h"

UENUM(BlueprintType)
enum class ESSDramaticBattleCutEditorFunctionParameterType : uint8 {
    None,
    CutDuration,
    CaptureThumbnail,
    SetCutSlowPosition,
    ActionName,
    CharacterIndex,
    Character,
    Pose,
    Facial,
    CharacterSelect,
    SetEffectActive,
    SetActionSlowPosition,
    CameraName,
    ActionNameAlreadySet,
    SubtitleIndex,
    Subtitle1,
    Subtitle2,
    Subtitle3,
    SubtitleBaseText,
    SubtitleReplaceWord,
    SubtitleSpeaker,
    CharacterSetting,
    RemoveSubtitle,
    BGMName,
    SlowPosition,
    LayerName,
    FinishEdit,
};

