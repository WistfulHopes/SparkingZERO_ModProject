#pragma once
#include "CoreMinimal.h"
#include "SSEffectHighSpeedMoveParts.generated.h"

USTRUCT(BlueprintType)
struct FSSEffectHighSpeedMoveParts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bShow;
    
    SS_API FSSEffectHighSpeedMoveParts();
};

