#pragma once
#include "CoreMinimal.h"
#include "KoratBulletKeyDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratBulletKeyDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratBulletKeyDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratBulletKeyDataAssetRecord> Records;
    
public:
    UKoratBulletKeyDataAsset();

};

