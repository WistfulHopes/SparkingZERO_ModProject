#pragma once
#include "CoreMinimal.h"
#include "KoratOverrideColorData.h"
#include "MutualDataAsset.h"
#include "KoratCustomEffectColorDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratCustomEffectColorDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratOverrideColorData Recored;
    
    UKoratCustomEffectColorDataAsset();

};

