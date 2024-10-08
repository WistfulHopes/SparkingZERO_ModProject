#pragma once
#include "CoreMinimal.h"
#include "BusSendLevelOffsetParam.generated.h"

USTRUCT(BlueprintType)
struct FBusSendLevelOffsetParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BusId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LevelOffset;
    
    CRIWARERUNTIME_API FBusSendLevelOffsetParam();
};

