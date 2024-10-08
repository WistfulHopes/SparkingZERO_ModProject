#pragma once
#include "CoreMinimal.h"
#include "KoratButtonGuideDataAssetRecord.h"
#include "KoratButtonGuideDataList.h"
#include "MutualDataAsset.h"
#include "KoratButtonGuideDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratButtonGuideDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratButtonGuideDataAssetRecord> Records;
    
public:
    UKoratButtonGuideDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Get(const FKoratButtonGuideDataList& InKey, FKoratButtonGuideDataAssetRecord& OutValue) const;
    
};

