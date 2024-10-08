#pragma once
#include "CoreMinimal.h"
#include "KoratUILevelDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratUILevelDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratUILevelDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratUILevelDataAssetRecord> Records;
    
public:
    UKoratUILevelDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
};

