#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSCharacterItemEffect.h"
#include "SSCharacterItemEffectDataAsset.generated.h"

UCLASS(Blueprintable)
class USSCharacterItemEffectDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InfoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSCharacterItemEffect> Effects;
    
    USSCharacterItemEffectDataAsset();

};

