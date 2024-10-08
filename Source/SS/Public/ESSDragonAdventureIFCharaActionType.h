#pragma once
#include "CoreMinimal.h"
#include "ESSDragonAdventureIFCharaActionType.generated.h"

UENUM(BlueprintType)
enum class ESSDragonAdventureIFCharaActionType : uint8 {
    Entry,
    Wait,
    Decide,
};

