#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterUIActionRequestStopInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterUIActionRequestStopInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutTime;
    
    SS_API FKoratCharacterUIActionRequestStopInfo();
};

