#pragma once
#include "CoreMinimal.h"
#include "SSCharacterSmashLevelGauge.generated.h"

USTRUCT(BlueprintType)
struct FSSCharacterSmashLevelGauge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecrementElapsedTime;
    
    SS_API FSSCharacterSmashLevelGauge();
};

