#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratShopSalesItemDataAsset.generated.h"

class USSShopSalesItemDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratShopSalesItemDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSShopSalesItemDataAsset*> PtrRecords;
    
public:
    UKoratShopSalesItemDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSalesItemName(const FName& InKey) const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateIdToAssets();
    
};

