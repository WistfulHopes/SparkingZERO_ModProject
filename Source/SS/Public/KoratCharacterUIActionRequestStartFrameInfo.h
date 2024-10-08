#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterUIActionRequestStartFrameInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterUIActionRequestStartFrameInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UIActionStartFrame;
    
    SS_API FKoratCharacterUIActionRequestStartFrameInfo();
};

