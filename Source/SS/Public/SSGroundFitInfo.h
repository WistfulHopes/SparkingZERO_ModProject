#pragma once
#include "CoreMinimal.h"
#include "SSGroundFitInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSSGroundFitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* highestHitActor;
    
    SS_API FSSGroundFitInfo();
};

