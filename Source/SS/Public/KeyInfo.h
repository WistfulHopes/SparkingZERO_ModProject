#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "KeyInfo.generated.h"

USTRUCT(BlueprintType)
struct FKeyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeyboadKeyIndex;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> Keys;
    
    SS_API FKeyInfo();
};

