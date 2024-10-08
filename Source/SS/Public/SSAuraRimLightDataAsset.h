#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterRimLightData.h"
#include "MutualDataAsset.h"
#include "SSAuraRimLightDataAsset.generated.h"

UCLASS(Blueprintable)
class USSAuraRimLightDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterRimLightData CharacterRimLightData;
    
    USSAuraRimLightDataAsset();

};

