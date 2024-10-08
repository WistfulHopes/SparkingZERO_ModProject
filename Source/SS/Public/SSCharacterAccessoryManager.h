#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KoratCharacterAccessoryInfo.h"
#include "SSCharacterAccessoryManager.generated.h"

class ASSCharacter;
class USSCharacterItemEquipment;

UCLASS(Blueprintable)
class USSCharacterAccessoryManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSCharacterItemEquipment* ItemEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASSCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterAccessoryInfo> DefaultItemInfo;
    
public:
    USSCharacterAccessoryManager();

};

