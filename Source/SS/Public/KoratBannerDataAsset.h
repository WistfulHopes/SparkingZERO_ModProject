#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratBannerDataAsset.generated.h"

class USSBannerDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratBannerDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSBannerDataAsset*> PtrRecords;
    
public:
    UKoratBannerDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetName(const FName& InKey) const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateIdToAssets();
    
};

