#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterPointLightData.h"
#include "MutualDataAsset.h"
#include "SSAuraPointLightDataAsset.generated.h"

UCLASS(Blueprintable)
class USSAuraPointLightDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterPointLightData CharacterPointLightData;
    
    USSAuraPointLightDataAsset();

};

