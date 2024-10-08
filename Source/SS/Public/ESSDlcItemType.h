#pragma once
#include "CoreMinimal.h"
#include "ESSDlcItemType.generated.h"

UENUM(BlueprintType)
enum class ESSDlcItemType : uint8 {
    None,
    Character,
    CharacterItem,
    Bgm,
    PlayerCardBG,
    Num,
};

