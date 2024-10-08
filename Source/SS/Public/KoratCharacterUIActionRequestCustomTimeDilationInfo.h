#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterUIActionRequestCustomTimeDilationInfo.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterUIActionRequestCustomTimeDilationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UIActionCustomTimeDilation;
    
    SS_API FKoratCharacterUIActionRequestCustomTimeDilationInfo();
};

