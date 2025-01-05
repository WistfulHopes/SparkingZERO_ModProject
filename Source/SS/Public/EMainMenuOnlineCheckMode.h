#pragma once
#include "CoreMinimal.h"
#include "EMainMenuOnlineCheckMode.generated.h"

UENUM(BlueprintType)
enum class EMainMenuOnlineCheckMode : uint8 {
    None,
    SeverLoginOnly = 4,
    MatchingEnableOnly = 8,
    CheckMaintenanceRankMatch = 16,
    CheckMaintenanceWorldLibrary = 32,
    CheckMaintenance011 = 64,
    CheckMaintenance010 = 128,
};

