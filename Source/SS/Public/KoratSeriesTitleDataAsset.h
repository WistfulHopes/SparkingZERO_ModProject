#pragma once
#include "CoreMinimal.h"
#include "KoratSeriesTitleDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratSeriesTitleDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratSeriesTitleDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratSeriesTitleDataAssetRecord> Records;
    
public:
    UKoratSeriesTitleDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetName(const FName& InKey) const;
    
};

