#pragma once
#include "CoreMinimal.h"
#include "KoratBattleDirectingBuffDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratBattleDirectingBuffDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratBattleDirectingBuffDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratBattleDirectingBuffDataAssetRecord> Records;
    
public:
    UKoratBattleDirectingBuffDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNameArray(TArray<FName>& OutNames) const;
    
};

