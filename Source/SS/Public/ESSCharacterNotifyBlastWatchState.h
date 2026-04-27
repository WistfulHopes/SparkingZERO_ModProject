#pragma once
#include "CoreMinimal.h"
#include "ESSCharacterNotifyBlastWatchState.generated.h"

UENUM(BlueprintType)
enum class ESSCharacterNotifyBlastWatchState : uint8 {
    Start,
    Finish,
    Abort,
};

