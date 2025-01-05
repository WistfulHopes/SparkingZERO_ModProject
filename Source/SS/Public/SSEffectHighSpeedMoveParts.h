#pragma once
#include "CoreMinimal.h"
#include "SSEffectHighSpeedMoveParts.generated.h"

class ASSEffectHighSpeedMoveActor;

USTRUCT(BlueprintType)
struct FSSEffectHighSpeedMoveParts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSEffectHighSpeedMoveActor* Actor;
    
    SS_API FSSEffectHighSpeedMoveParts();
};

