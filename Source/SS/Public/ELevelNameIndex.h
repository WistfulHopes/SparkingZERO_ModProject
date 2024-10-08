#pragma once
#include "CoreMinimal.h"
#include "ELevelNameIndex.generated.h"

UENUM(BlueprintType)
enum class ELevelNameIndex : uint8 {
    Title,
    MainMenu,
    Adventure,
    Battle,
    Mission,
    Collection,
    Request,
};

