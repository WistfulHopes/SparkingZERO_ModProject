#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "KoratBGMDataAsset.generated.h"

class USSBGMDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class UKoratBGMDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSBGMDataAsset*> PtrRecords;
    
public:
    UKoratBGMDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable)
    void SetSoundNameString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBGMName(const FName& InBGMKey) const;
    
    UFUNCTION(BlueprintCallable)
    void AddDataAssets();
    
};

