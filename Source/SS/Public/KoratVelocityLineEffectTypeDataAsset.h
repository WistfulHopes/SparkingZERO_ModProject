#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratVelocityLineEffectTypeDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratVelocityLineEffectTypeDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Records;
    
    UKoratVelocityLineEffectTypeDataAsset();

};

