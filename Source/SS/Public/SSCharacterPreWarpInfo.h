#pragma once
#include "CoreMinimal.h"
#include "SSCharacterPreWarpInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSSCharacterPreWarpInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* WarpActor;
    
    SS_API FSSCharacterPreWarpInfo();
};

