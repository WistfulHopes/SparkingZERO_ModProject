#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataDragonDashMovementParameter.h"
#include "KoratCharacterDataDragonHomingParameter.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterDataDragonHomingParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataDragonDashMovementParameter MovementParameterIN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataDragonDashMovementParameter MovementParameterLP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataDragonDashMovementParameter MovementParameterOT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSpeedINOT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpCostIN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpCostLP;
    
    SS_API FKoratCharacterDataDragonHomingParameter();
};

