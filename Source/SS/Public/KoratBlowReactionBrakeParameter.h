#pragma once
#include "CoreMinimal.h"
#include "KoratBlowReactionUkemiStandUpMovementParameter.h"
#include "KoratBlowReactionBrakeParameter.generated.h"

USTRUCT(BlueprintType)
struct FKoratBlowReactionBrakeParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBlowReactionUkemiStandUpMovementParameter MovementParameter;
    
    SS_API FKoratBlowReactionBrakeParameter();
};

