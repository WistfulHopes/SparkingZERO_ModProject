#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneSubtitleDisplayTime.generated.h"

USTRUCT(BlueprintType)
struct FSSEventSceneSubtitleDisplayTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LengthThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTimeSeconds;
    
    SS_API FSSEventSceneSubtitleDisplayTime();
};

