#pragma once
#include "CoreMinimal.h"
#include "EKoratCharacterHUDStatusReq.generated.h"

UENUM(BlueprintType)
enum class EKoratCharacterHUDStatusReq : uint8 {
    None,
    MainGaugeHideStart,
    MainGaugeHide,
    MainGaugeHideEnd,
    MainGaugeShowStart,
    MainGaugeShow,
    MainGaugeShowEnd,
};

