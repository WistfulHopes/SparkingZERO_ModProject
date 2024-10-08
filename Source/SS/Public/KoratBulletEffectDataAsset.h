#pragma once
#include "CoreMinimal.h"
#include "KoratBulletEffectDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratBulletEffectDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratBulletEffectDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratBulletEffectDataAssetRecord> Records;
    
    UKoratBulletEffectDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
};

