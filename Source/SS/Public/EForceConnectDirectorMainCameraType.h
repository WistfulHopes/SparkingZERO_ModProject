#pragma once
#include "CoreMinimal.h"
#include "EForceConnectDirectorMainCameraType.generated.h"

UENUM(BlueprintType)
enum class EForceConnectDirectorMainCameraType : uint8 {
    None,
    MenuDirector,
    BattleDirector,
    MAX,
};

