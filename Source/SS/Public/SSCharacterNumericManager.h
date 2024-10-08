#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SSCharacterNumericManager.generated.h"

class USSCharacterItemEquipment;
class USSCharacterNumeric;

UCLASS(Blueprintable)
class USSCharacterNumericManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterNumeric* FinalNumeric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterItemEquipment* ItemEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterItemEquipment* EnemyItemEquipment;
    
public:
    USSCharacterNumericManager();

};

