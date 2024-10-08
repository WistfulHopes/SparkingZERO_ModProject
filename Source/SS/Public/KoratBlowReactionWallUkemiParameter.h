#pragma once
#include "CoreMinimal.h"
#include "KoratBlowReactionWallUkemiMovementParameter.h"
#include "KoratBlowReactionWallUkemiParameter.generated.h"

USTRUCT(BlueprintType)
struct FKoratBlowReactionWallUkemiParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartHitRemainTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBlowReactionWallUkemiMovementParameter MovementParameter;
    
    SS_API FKoratBlowReactionWallUkemiParameter();
};

