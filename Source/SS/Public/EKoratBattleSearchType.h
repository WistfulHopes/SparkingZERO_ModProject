#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleSearchType.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleSearchType : uint8 {
    None,
    Aura,
    Scouter,
    Cyborg,
    God,
};

