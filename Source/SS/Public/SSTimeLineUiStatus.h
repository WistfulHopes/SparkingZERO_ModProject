#pragma once
#include "CoreMinimal.h"
#include "SSTimeLineUiStatus.generated.h"

USTRUCT(BlueprintType)
struct FSSTimeLineUiStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SelectBarIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollOffsetX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollOffsetY;
    
    SS_API FSSTimeLineUiStatus();
};

