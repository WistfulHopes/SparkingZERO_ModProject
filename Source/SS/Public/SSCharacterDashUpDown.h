#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratCharacterDataDashUpDownParameter.h"
#include "SSCharacterDashUpDown.generated.h"

class USSDashUpDownDataAsset;

UCLASS(Blueprintable)
class USSCharacterDashUpDown : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSDashUpDownDataAsset* UpDownData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataDashUpDownParameter MovementParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataDashUpDownParameter ScaledMovementParameter;
    
public:
    USSCharacterDashUpDown();

};

