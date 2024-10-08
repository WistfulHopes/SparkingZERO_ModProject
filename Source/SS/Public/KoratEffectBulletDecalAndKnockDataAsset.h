#pragma once
#include "CoreMinimal.h"
#include "KoratEffectBulletDecalDataAssetRecord.h"
#include "KoratEffectBulletKnockDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratEffectBulletDecalAndKnockDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratEffectBulletDecalAndKnockDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratEffectBulletDecalDataAssetRecord> DecalRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratEffectBulletKnockDataAssetRecord> KnockRecords;
    
public:
    UKoratEffectBulletDecalAndKnockDataAsset();

};

