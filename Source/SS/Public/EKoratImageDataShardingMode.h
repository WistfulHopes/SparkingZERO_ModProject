#pragma once
#include "CoreMinimal.h"
#include "EKoratImageDataShardingMode.generated.h"

UENUM(BlueprintType)
enum class EKoratImageDataShardingMode : uint8 {
    None,
    ShardingEnd,
    Num,
};

