#pragma once
#include "CoreMinimal.h"
#include "KoratSpeciesDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratSpeciesDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UKoratSpeciesDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratSpeciesDataAssetRecord> Records;
    
public:
    UKoratSpeciesDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetName(const FName& InKey) const;
    
};

