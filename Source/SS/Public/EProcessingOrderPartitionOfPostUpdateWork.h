#pragma once
#include "CoreMinimal.h"
#include "EProcessingOrderPartitionOfPostUpdateWork.generated.h"

UENUM(BlueprintType)
enum class EProcessingOrderPartitionOfPostUpdateWork : uint8 {
    CutCameraDirector,
    RootCameraDirector,
};

