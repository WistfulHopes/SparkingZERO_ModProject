#pragma once
#include "CoreMinimal.h"
#include "EKoratDramaticEditTutorialMode.generated.h"

UENUM(BlueprintType)
enum class EKoratDramaticEditTutorialMode : uint8 {
    None,
    TestPlayed,
    Finished,
    Num,
};

