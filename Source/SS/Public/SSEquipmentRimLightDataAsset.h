#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterRimLightData.h"
#include "MutualDataAsset.h"
#include "SSEquipmentRimLightDataAsset.generated.h"

UCLASS(Blueprintable)
class USSEquipmentRimLightDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterRimLightData CharacterRimLightData;
    
    USSEquipmentRimLightDataAsset();

};

