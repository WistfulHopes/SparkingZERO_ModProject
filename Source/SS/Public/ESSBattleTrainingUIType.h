#pragma once
#include "CoreMinimal.h"
#include "ESSBattleTrainingUIType.generated.h"

UENUM(BlueprintType)
enum class ESSBattleTrainingUIType : uint8 {
    Top,
    ListBase,
    ListItem,
    TextArea,
    Num,
};

