#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratCharacterDataMovementParameter.h"
#include "SSCharacterMovement.generated.h"

class USSMovementDataAsset;

UCLASS(Blueprintable)
class USSCharacterMovement : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMovementDataAsset* MovementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataMovementParameter MovementParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataMovementParameter ScaledMovementParameter;
    
public:
    USSCharacterMovement();

};

