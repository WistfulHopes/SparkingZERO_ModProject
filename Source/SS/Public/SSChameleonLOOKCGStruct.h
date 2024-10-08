#pragma once
#include "CoreMinimal.h"
#include "SSChameleonLOOKCGStruct.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FSSChameleonLOOKCGStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* File;
    
    SS_API FSSChameleonLOOKCGStruct();
};

