#pragma once
#include "CoreMinimal.h"
#include "KoratTaketurnsDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratBattleTaketurnsDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratBattleTaketurnsDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratTaketurnsDataAssetRecord> Records;
    
public:
    UKoratBattleTaketurnsDataAsset();

    UFUNCTION(BlueprintCallable)
    void ReloadChangedData();
    
};

