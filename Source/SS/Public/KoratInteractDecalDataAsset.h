#pragma once
#include "CoreMinimal.h"
#include "KoratInteractDecalBranchDataRecord.h"
#include "MutualDataAsset.h"
#include "KoratInteractDecalDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratInteractDecalDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratInteractDecalBranchDataRecord> SettingList;
    
public:
    UKoratInteractDecalDataAsset();

    UFUNCTION(BlueprintCallable)
    void Prepare();
    
};

