#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSCharacterActionTargetSocket.generated.h"

USTRUCT(BlueprintType)
struct FSSCharacterActionTargetSocket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    SS_API FSSCharacterActionTargetSocket();
};

