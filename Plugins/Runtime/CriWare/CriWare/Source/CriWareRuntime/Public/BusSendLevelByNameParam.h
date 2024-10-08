#pragma once
#include "CoreMinimal.h"
#include "BusSendLevelByNameParam.generated.h"

USTRUCT(BlueprintType)
struct FBusSendLevelByNameParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Level;
    
    CRIWARERUNTIME_API FBusSendLevelByNameParam();
};

