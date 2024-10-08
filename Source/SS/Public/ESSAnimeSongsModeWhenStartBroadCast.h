#pragma once
#include "CoreMinimal.h"
#include "ESSAnimeSongsModeWhenStartBroadCast.generated.h"

UENUM(BlueprintType)
enum class ESSAnimeSongsModeWhenStartBroadCast : uint8 {
    PlayAlterNativeBGM,
    StopBGM,
    MuteBGM,
};

