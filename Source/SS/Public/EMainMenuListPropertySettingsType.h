#pragma once
#include "CoreMinimal.h"
#include "EMainMenuListPropertySettingsType.generated.h"

UENUM(BlueprintType)
enum class EMainMenuListPropertySettingsType : uint8 {
    None,
    MatchRule,
    Ping,
    Rank,
    TeamRule,
    MaxDP,
    Time,
    CompletionRate,
    Language,
    BuffItem,
    Participants,
    PrivateSlot,
    Max,
};

