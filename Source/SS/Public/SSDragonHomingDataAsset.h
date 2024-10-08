#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataDragonDashMovementParameter.h"
#include "MutualDataAsset.h"
#include "SSDragonHomingDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDragonHomingDataAsset : public UMutualDataAsset {
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
    
    USSDragonHomingDataAsset();

};

