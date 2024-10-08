#pragma once
#include "CoreMinimal.h"
#include "KoratEventSceneLocatorRecord.h"
#include "MutualDataAsset.h"
#include "KoratEventSceneAbstractLocatorDataAsset.generated.h"

UCLASS(Blueprintable, HideDropdown, MinimalAPI)
class UKoratEventSceneAbstractLocatorDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratEventSceneLocatorRecord> Records;
    
public:
    UKoratEventSceneAbstractLocatorDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
};

