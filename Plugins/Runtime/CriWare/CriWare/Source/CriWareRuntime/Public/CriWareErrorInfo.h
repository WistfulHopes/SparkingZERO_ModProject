#pragma once
#include "CoreMinimal.h"
#include "ECriWareErrorType.h"
#include "CriWareErrorInfo.generated.h"

USTRUCT(BlueprintType)
struct CRIWARERUNTIME_API FCriWareErrorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECriWareErrorType ErrorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    FCriWareErrorInfo();
};

