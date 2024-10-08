#pragma once
#include "CoreMinimal.h"
#include "KoratMoveStandUpMovementParameter.h"
#include "KoratMoveStandUpParameter.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FKoratMoveStandUpParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TurnCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMoveStandUpMovementParameter MovementParameterIN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMoveStandUpMovementParameter MovementParameterOT;
    
    SS_API FKoratMoveStandUpParameter();
};

