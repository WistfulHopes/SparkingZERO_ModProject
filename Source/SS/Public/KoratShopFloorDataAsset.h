#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratShopFloorDataAsset.generated.h"

class USSShopFloorDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratShopFloorDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSShopFloorDataAsset*> PtrRecords;
    
public:
    UKoratShopFloorDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFloorName(const FName& InKey) const;
    
};

