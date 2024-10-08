#pragma once
#include "CoreMinimal.h"
#include "KoratUIActionBlendOption.h"
#include "KoratCharacterUIActionRequestBlendOptionInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterUIActionRequestBlendOptionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratUIActionBlendOption UIActionBlendOption;
    
    SS_API FKoratCharacterUIActionRequestBlendOptionInfo();
};

