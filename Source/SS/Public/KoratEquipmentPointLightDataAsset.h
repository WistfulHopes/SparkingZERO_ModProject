#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratEquipmentPointLightDataAsset.generated.h"

class USSEquipmentPointLightDataAsset;

UCLASS(Blueprintable)
class UKoratEquipmentPointLightDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSEquipmentPointLightDataAsset*> PtrRecords;
    
public:
    UKoratEquipmentPointLightDataAsset();

};

