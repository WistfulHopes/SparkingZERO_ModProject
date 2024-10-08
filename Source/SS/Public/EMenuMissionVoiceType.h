#pragma once
#include "CoreMinimal.h"
#include "EMenuMissionVoiceType.generated.h"

UENUM(BlueprintType)
enum class EMenuMissionVoiceType : uint8 {
    In,
    Receipt,
    BulkReceipt,
    Add,
    Alone,
    Num,
};

