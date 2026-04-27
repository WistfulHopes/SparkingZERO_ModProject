#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticEditFilterMode.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticEditFilterMode : uint8 {
    None,
    Picture,
    BaseText,
    BaseTextOneWord,
    BaseTextTwoWord,
    BaseTextNoWord,
    ReplaceWord,
    ConvertionText,
    ConvertionBaseText,
    ConvertionBaseTextOneWord,
    ConvertionBaseTextTwoWord,
    ConvertionBaseTextNoWord,
    ConvertionReplaceWord,
    ConvertionSpeaker,
    Tag,
};

