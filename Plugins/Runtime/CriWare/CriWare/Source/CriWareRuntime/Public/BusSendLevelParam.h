#pragma once
#include "CoreMinimal.h"
#include "BusSendLevelParam.generated.h"

USTRUCT(BlueprintType)
struct FBusSendLevelParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BusId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Level;
    
    CRIWARERUNTIME_API FBusSendLevelParam();
};

