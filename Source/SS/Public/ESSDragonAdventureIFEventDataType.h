#pragma once
#include "CoreMinimal.h"
#include "ESSDragonAdventureIFEventDataType.generated.h"

UENUM(BlueprintType)
enum class ESSDragonAdventureIFEventDataType : uint8 {
    FlyersData,
    StoryData,
    BattleData,
    TimeSliceData,
};

