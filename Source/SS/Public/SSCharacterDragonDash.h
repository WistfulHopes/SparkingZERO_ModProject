#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratCharacterDataDragonDashParameter.h"
#include "SSCharacterDragonDash.generated.h"

class USSDragonDashDataAsset;

UCLASS(Blueprintable)
class USSCharacterDragonDash : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDragonDashDataAsset* DragonDashData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataDragonDashParameter MovementParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataDragonDashParameter ScaledMovementParameter;
    
public:
    USSCharacterDragonDash();

};

