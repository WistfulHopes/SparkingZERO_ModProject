#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSDragonAdventureIFEventDataAssetRecord.h"
#include "SSDragonAdventureIFEventDataAsset.generated.h"

UCLASS(Blueprintable)
class USSDragonAdventureIFEventDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSDragonAdventureIFEventDataAssetRecord> Records;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSDragonAdventureIFEventDataAssetRecord> EventArray;
    
    USSDragonAdventureIFEventDataAsset();

    UFUNCTION(BlueprintCallable)
    void SetManaSource();
    
    UFUNCTION(BlueprintCallable)
    void DataTransition();
    
};

