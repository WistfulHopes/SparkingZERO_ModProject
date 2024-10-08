#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleFormat.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleFormat : uint8 {
    OneVsOne,
    StarPickingCeremony,
    WinningCeremony,
    TeamBattle,
};

