#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterUIActionComponentCommandRequest.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterUIActionComponentCommandRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDone;
    
    SS_API FKoratCharacterUIActionComponentCommandRequest();
};

