#pragma once
#include "CoreMinimal.h"
#include "KoratEffectHitDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratEffectHitDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratEffectHitDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratEffectHitDataAssetRecord> Records;
    
public:
    UKoratEffectHitDataAsset();

};

