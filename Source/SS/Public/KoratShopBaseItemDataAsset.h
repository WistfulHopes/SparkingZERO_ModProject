#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratShopBaseItemDataAsset.generated.h"

class USSShopBaseItemDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratShopBaseItemDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSShopBaseItemDataAsset*> PtrRecords;
    
public:
    UKoratShopBaseItemDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBaseItemName(const FName& InKey) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBaseItemExplainText(const FName& InKey) const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateIdToAssets();
    
};

