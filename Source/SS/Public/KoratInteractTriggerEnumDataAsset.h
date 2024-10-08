#pragma once
#include "CoreMinimal.h"
#include "KoratInteractTriggerEnumDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratInteractTriggerEnumDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratInteractTriggerEnumDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratInteractTriggerEnumDataAssetRecord> Records;
    
public:
    UKoratInteractTriggerEnumDataAsset();

    UFUNCTION(BlueprintCallable)
    void Prepare();
    
};

