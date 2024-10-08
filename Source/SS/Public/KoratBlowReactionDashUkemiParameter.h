#pragma once
#include "CoreMinimal.h"
#include "KoratBlowReactionDashUkemiMovementParameter.h"
#include "KoratCharacterDataDragonDashParameter.h"
#include "KoratBlowReactionDashUkemiParameter.generated.h"

USTRUCT(BlueprintType)
struct FKoratBlowReactionDashUkemiParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartHitRemainTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBlowReactionDashUkemiMovementParameter MovementParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataDragonDashParameter DragonDashParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DragonDashEndAdditionalTime;
    
    SS_API FKoratBlowReactionDashUkemiParameter();
};

