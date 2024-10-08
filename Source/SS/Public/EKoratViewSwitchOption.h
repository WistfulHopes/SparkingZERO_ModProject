#pragma once
#include "CoreMinimal.h"
#include "EKoratViewSwitchOption.generated.h"

UENUM(BlueprintType)
enum class EKoratViewSwitchOption : uint8 {
    kFirstPersonMode,
    kAnimState,
    kAnimNotify,
    kLevelSequence,
    kZItem,
    kLevelSequenceLow,
    kNum,
    kDefault = kLevelSequence,
};

