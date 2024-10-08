#pragma once
#include "CoreMinimal.h"
#include "KoratBlowReactionUkemiStandUpMovementParameter.h"
#include "KoratBlowReactionUkemiStandUpParameter.generated.h"

USTRUCT(BlueprintType)
struct FKoratBlowReactionUkemiStandUpParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBlowReactionUkemiStandUpMovementParameter MovementParameterIN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBlowReactionUkemiStandUpMovementParameter MovementParameterOT;
    
    SS_API FKoratBlowReactionUkemiStandUpParameter();
};

