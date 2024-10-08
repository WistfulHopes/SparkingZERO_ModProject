#pragma once
#include "CoreMinimal.h"
#include "KoratEquipmentRimLightDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEquipmentRimLightDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEquipmentRimLightDataList();
};

