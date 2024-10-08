#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratStockItemDataAsset.generated.h"

class USSStockItemDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratStockItemDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSStockItemDataAsset*> PtrRecords;
    
public:
    UKoratStockItemDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetItemName(const FName& InKey) const;
    
};

