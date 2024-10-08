#pragma once
#include "CoreMinimal.h"
#include "SSAiUserTimer.generated.h"

USTRUCT(BlueprintType)
struct FSSAiUserTimer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetTime;
    
    SS_API FSSAiUserTimer();
};

