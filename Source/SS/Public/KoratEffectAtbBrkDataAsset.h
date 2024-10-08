#pragma once
#include "CoreMinimal.h"
#include "KoratEffectAtbBrkDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratEffectAtbBrkDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratEffectAtbBrkDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratEffectAtbBrkDataAssetRecord> Records;
    
public:
    UKoratEffectAtbBrkDataAsset();

    UFUNCTION(BlueprintCallable)
    void Prepare();
    
};

