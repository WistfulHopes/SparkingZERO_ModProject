#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataDragonDashMovementParameter.h"
#include "MutualDataAsset.h"
#include "SSRevengeDashDataAsset.generated.h"

UCLASS(Blueprintable)
class USSRevengeDashDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataDragonDashMovementParameter MovementParameter;
    
    USSRevengeDashDataAsset();

};

