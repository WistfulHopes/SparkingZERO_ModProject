#pragma once
#include "CoreMinimal.h"
#include "KoratEquipmentPointLightDataList.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratEquipmentPointLightDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FKoratEquipmentPointLightDataList();
};

