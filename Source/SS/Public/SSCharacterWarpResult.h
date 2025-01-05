#pragma once
#include "CoreMinimal.h"
#include "SSCharacterWarpCommandInfo.h"
#include "SSCharacterWarpResult.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSSCharacterWarpResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSSCharacterWarpCommandInfo CommandInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* WarpActor;
    
    SS_API FSSCharacterWarpResult();
};

