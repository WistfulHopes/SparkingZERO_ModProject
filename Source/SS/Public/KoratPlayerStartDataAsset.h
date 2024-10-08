#pragma once
#include "CoreMinimal.h"
#include "KoratPlayerStartDataAssetRecord.h"
#include "KoratPlayerStartDataList.h"
#include "MutualDataAsset.h"
#include "KoratPlayerStartDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratPlayerStartDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratPlayerStartDataAssetRecord> Records;
    
public:
    UKoratPlayerStartDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Get(const FKoratPlayerStartDataList& InKey, FKoratPlayerStartDataAssetRecord& OutValue) const;
    
};

