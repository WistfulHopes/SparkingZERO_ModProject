#pragma once
#include "CoreMinimal.h"
#include "KoratInteractKnockDataRecord.h"
#include "MutualDataAsset.h"
#include "KoratInteractKnockDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratInteractKnockDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratInteractKnockDataRecord> SettingList;
    
public:
    UKoratInteractKnockDataAsset();

    UFUNCTION(BlueprintCallable)
    void Prepare();
    
};

