#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratCustomVelocityLineEffectDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratCustomVelocityLineEffectDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Records;
    
    UKoratCustomVelocityLineEffectDataAsset();

};

