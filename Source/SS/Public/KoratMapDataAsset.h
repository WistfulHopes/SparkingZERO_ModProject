#pragma once
#include "CoreMinimal.h"
#include "KoratMapDataAssetRecord.h"
#include "KoratMapDataList.h"
#include "MutualDataAsset.h"
#include "KoratMapDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratMapDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratMapDataAssetRecord> Records;
    
public:
    UKoratMapDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable)
    void SetManaSource();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMapName(const FName& InMapKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Get(const FKoratMapDataList& InKey, FKoratMapDataAssetRecord& OutValue) const;
    
    UFUNCTION(BlueprintCallable)
    void ErrorCheck();
    
};

