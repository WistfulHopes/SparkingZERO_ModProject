#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleStartAppealType.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleStartAppealType : uint8 {
    Normal,
    NoAllAppeal,
    NoCharacterAppeal,
};

