#pragma once
#include "CoreMinimal.h"
#include "SSVersionBase.generated.h"

USTRUCT(BlueprintType)
struct FSSVersionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Version;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CompatibleWithVersion;
    
public:
    SS_API FSSVersionBase();
};

