#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratEquipmentRimLightDataAsset.generated.h"

class USSEquipmentRimLightDataAsset;

UCLASS(Blueprintable)
class UKoratEquipmentRimLightDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSEquipmentRimLightDataAsset*> PtrRecords;
    
public:
    UKoratEquipmentRimLightDataAsset();

};

