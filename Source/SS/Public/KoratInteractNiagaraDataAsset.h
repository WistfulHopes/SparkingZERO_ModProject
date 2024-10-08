#pragma once
#include "CoreMinimal.h"
#include "KoratInteractNiagaraDataRecord.h"
#include "MutualDataAsset.h"
#include "KoratInteractNiagaraDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratInteractNiagaraDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratInteractNiagaraDataRecord> SettingList;
    
public:
    UKoratInteractNiagaraDataAsset();

    UFUNCTION(BlueprintCallable)
    void Prepare();
    
};

