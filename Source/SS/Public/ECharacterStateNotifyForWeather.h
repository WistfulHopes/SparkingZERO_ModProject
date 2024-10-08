#pragma once
#include "CoreMinimal.h"
#include "ECharacterStateNotifyForWeather.generated.h"

UENUM(BlueprintType)
enum class ECharacterStateNotifyForWeather : uint8 {
    ChargeStart,
    ChargeCancel,
    ChangeCharacter,
    Num,
};

