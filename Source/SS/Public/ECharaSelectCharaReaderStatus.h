#pragma once
#include "CoreMinimal.h"
#include "ECharaSelectCharaReaderStatus.generated.h"

UENUM(BlueprintType)
enum class ECharaSelectCharaReaderStatus : uint8 {
    Initial,
    Unload,
    Delay,
    LoadingCamera,
    UnloadWait,
    LoadingAll,
    Loaded,
};

