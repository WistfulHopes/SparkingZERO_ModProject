#pragma once
#include "CoreMinimal.h"
#include "KoratChainPlaySoundDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratChainPlaySoundDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratChainPlaySoundDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratChainPlaySoundDataAssetRecord> Records;
    
public:
    UKoratChainPlaySoundDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
};

