#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESSReplayUICamera.h"
#include "ESSReplayUIPlayState.h"
#include "SSReplayUIPlayInfo.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSReplayUIPlayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime PlaybackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSReplayUIPlayState PlayState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSReplayUICamera PlayCamera;
    
    FSSReplayUIPlayInfo();
};

