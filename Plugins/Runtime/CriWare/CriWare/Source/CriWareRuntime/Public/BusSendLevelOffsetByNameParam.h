#pragma once
#include "CoreMinimal.h"
#include "BusSendLevelOffsetByNameParam.generated.h"

USTRUCT(BlueprintType)
struct FBusSendLevelOffsetByNameParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LevelOffset;
    
    CRIWARERUNTIME_API FBusSendLevelOffsetByNameParam();
};

