#pragma once
#include "CoreMinimal.h"
#include "EAnimPlayStatus.generated.h"

UENUM(BlueprintType)
enum class EAnimPlayStatus : uint8 {
    None,
    InputWait,
    DetailShow,
    StampAnim,
    CardInfo,
    DetailWait,
    DetailHide,
    StampContinue,
    DialogWiat,
    BalkStampDialogWiat,
    DialogFinish,
};

