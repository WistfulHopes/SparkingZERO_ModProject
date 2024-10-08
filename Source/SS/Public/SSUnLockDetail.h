#pragma once
#include "CoreMinimal.h"
#include "SSUnLockDetail.generated.h"

USTRUCT(BlueprintType)
struct FSSUnLockDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGamePlayUnLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDLCUnLock;
    
    SS_API FSSUnLockDetail();
};

