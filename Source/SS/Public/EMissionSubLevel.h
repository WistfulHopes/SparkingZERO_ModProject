#pragma once
#include "CoreMinimal.h"
#include "EMissionSubLevel.generated.h"

UENUM(BlueprintType)
enum class EMissionSubLevel : uint8 {
    WBP_MenuMission,
    WBP_Daily,
    WBP_Weekly,
    WBP_Total,
};

