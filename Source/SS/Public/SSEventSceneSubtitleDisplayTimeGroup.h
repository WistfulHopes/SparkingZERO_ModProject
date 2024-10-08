#pragma once
#include "CoreMinimal.h"
#include "SSEventSceneSubtitleDisplayTime.h"
#include "SSEventSceneSubtitleDisplayTimeGroup.generated.h"

USTRUCT(BlueprintType)
struct FSSEventSceneSubtitleDisplayTimeGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSEventSceneSubtitleDisplayTime> DisplayTimes;
    
    SS_API FSSEventSceneSubtitleDisplayTimeGroup();
};

