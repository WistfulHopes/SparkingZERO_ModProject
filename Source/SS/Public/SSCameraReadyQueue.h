#pragma once
#include "CoreMinimal.h"
#include "SSCameraReady.h"
#include "SSCameraReadyQueue.generated.h"

USTRUCT(BlueprintType)
struct FSSCameraReadyQueue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSCameraReady> CameraReadys;
    
    SS_API FSSCameraReadyQueue();
};

