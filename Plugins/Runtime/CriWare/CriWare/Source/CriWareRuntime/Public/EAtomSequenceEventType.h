#pragma once
#include "CoreMinimal.h"
#include "EAtomSequenceEventType.generated.h"

UENUM(BlueprintType)
enum class EAtomSequenceEventType : uint8 {
    SEQUENCE_TYPE_CALLBACK,
    SEQUENCE_TYPESIZE_4BYTE,
};

