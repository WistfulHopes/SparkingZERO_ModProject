#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MutualDataAsset.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMutualDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UMutualDataAsset();

    UFUNCTION(BlueprintCallable)
    static void ReloadCharacterParameter();
    
    UFUNCTION(BlueprintCallable)
    void ImportFromCSV();
    
    UFUNCTION(BlueprintCallable)
    static void ImportAll();
    
    UFUNCTION(BlueprintCallable)
    void ExportToCSV();
    
    UFUNCTION(BlueprintCallable)
    static void ExportAll();
    
};

