#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterPointLightData.h"
#include "MutualDataAsset.h"
#include "SSEquipmentPointLightDataAsset.generated.h"

UCLASS(Blueprintable)
class USSEquipmentPointLightDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterPointLightData CharacterPointLightData;
    
    USSEquipmentPointLightDataAsset();

};

