#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterUIActionRequestEndFrameInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterUIActionRequestEndFrameInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UIActionEndFrame;
    
    SS_API FKoratCharacterUIActionRequestEndFrameInfo();
};

