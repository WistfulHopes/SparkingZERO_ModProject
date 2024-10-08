#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleDirectingType.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleDirectingType : uint8 {
    None,
    Action,
    Parameters,
    Performance,
    Event,
    TableChange,
    CharacterChange,
    CharacterFormChange,
    Survivor,
    Timer,
};

