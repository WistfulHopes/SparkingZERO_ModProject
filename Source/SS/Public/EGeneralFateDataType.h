#pragma once
#include "CoreMinimal.h"
#include "EGeneralFateDataType.generated.h"

UENUM(BlueprintType)
enum class EGeneralFateDataType : uint8 {
    None,
    IntroductionFriend,
    IntroductionEnemy,
    IntroductionUnknown,
    IntroductionRival,
    IntroductionGreatApe,
    IntroductionMirror,
    VictoryFriend,
    VictoryEnemy,
    VictoryNormal,
    Max,
};

