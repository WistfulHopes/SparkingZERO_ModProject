#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleKeyMode.generated.h"

UENUM(BlueprintType)
enum class EKoratBattleKeyMode : uint8 {
    Key1Pvs2P,
    Key1PvsCom,
    KeyComvs1P,
    KeyComvsCom,
};

