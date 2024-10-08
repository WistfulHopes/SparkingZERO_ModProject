#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataDragonDashMovementParameter.h"
#include "KoratCharacterDataRevengeDashParameter.generated.h"

USTRUCT(BlueprintType)
struct FKoratCharacterDataRevengeDashParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataDragonDashMovementParameter MovementParameterIN;
    
    SS_API FKoratCharacterDataRevengeDashParameter();
};

