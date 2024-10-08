#pragma once
#include "CoreMinimal.h"
#include "SSManualCameraInfo.generated.h"

class ASSCutCameraActor;

USTRUCT(BlueprintType)
struct FSSManualCameraInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCutCameraActor* CameraInstance;
    
    SS_API FSSManualCameraInfo();
};

