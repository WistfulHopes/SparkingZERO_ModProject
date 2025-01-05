#pragma once
#include "CoreMinimal.h"
#include "SSBtlMode010NotifyData.generated.h"

USTRUCT(BlueprintType)
struct FSSBtlMode010NotifyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartDisplayed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndDisplayed;
    
    SS_API FSSBtlMode010NotifyData();
};

