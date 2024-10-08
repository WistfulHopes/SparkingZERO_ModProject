#pragma once
#include "CoreMinimal.h"
#include "KoratLungeEndDamageDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratLungeEndDamageDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratLungeEndDamageDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratLungeEndDamageDataAssetRecord> Records;
    
public:
    UKoratLungeEndDamageDataAsset();

};

