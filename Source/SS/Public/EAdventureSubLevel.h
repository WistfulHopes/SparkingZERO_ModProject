#pragma once
#include "CoreMinimal.h"
#include "EAdventureSubLevel.generated.h"

UENUM(BlueprintType)
enum class EAdventureSubLevel : uint8 {
    WBP_MenuAdventure,
    WBP_Beginning,
    WBP_Continue,
    WBP_ChapterSelect,
};

