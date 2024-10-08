#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/AssetManagerTypes.h"
#include "Engine/DataAsset.h"
#include "SSPrimaryAssetLabel.generated.h"

class UObject;

UCLASS(Blueprintable)
class SS_API USSPrimaryAssetLabel : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetRules Rules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLabelAssetsInMyDirectory: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsRuntimeLabel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> ExplicitAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> ExplicitBlueprints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollectionReference AssetCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> InMyDirectories;
    
    USSPrimaryAssetLabel();

    UFUNCTION(BlueprintCallable)
    void ImportMyDirectories();
    
    UFUNCTION(BlueprintCallable)
    void ImportExplicitAssets();
    
    UFUNCTION(BlueprintCallable)
    void ExportExplicitAssets();
    
};

