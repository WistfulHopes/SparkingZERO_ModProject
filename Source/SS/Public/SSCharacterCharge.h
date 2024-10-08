#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSCharacterCharge.generated.h"

class USSChargeDataAsset;

UCLASS(Blueprintable)
class USSCharacterCharge : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSChargeDataAsset* ChargeData;
    
public:
    USSCharacterCharge();

};

