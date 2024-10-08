#pragma once
#include "CoreMinimal.h"
#include "KoratEffectAtbBrkTypeDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratEffectAtbBrkTypeDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratEffectAtbBrkTypeDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratEffectAtbBrkTypeDataAssetRecord> Records;
    
public:
    UKoratEffectAtbBrkTypeDataAsset();

};

