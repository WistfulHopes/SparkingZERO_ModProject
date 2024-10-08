#pragma once
#include "CoreMinimal.h"
#include "SSCameraConnected.h"
#include "SSCameraConnectedQueue.generated.h"

USTRUCT(BlueprintType)
struct FSSCameraConnectedQueue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSCameraConnected> CameraConnected;
    
    SS_API FSSCameraConnectedQueue();
};

