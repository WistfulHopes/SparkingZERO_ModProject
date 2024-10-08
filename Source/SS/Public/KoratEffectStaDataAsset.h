#pragma once
#include "CoreMinimal.h"
#include "KoratEffectStaDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratEffectStaDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratEffectStaDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratEffectStaDataAssetRecord> Records;
    
public:
    UKoratEffectStaDataAsset();

};

