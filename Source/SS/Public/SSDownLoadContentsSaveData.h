#pragma once
#include "CoreMinimal.h"
#include "SSDownLoadContentsSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSSDownLoadContentsSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcquiredOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcquiring;
    
    SS_API FSSDownLoadContentsSaveData();
};

