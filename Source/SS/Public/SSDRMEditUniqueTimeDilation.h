#pragma once
#include "CoreMinimal.h"
#include "SSDRMEditUniqueTimeDilation.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSDRMEditUniqueTimeDilation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDilation;
    
    FSSDRMEditUniqueTimeDilation();
};

