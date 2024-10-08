#pragma once
#include "CoreMinimal.h"
#include "KoratCameraModeDataAssetRecord.h"
#include "MutualDataAsset.h"
#include "KoratCameraModeDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratCameraModeDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratCameraModeDataAssetRecord> Records;
    
public:
    UKoratCameraModeDataAsset();

    UFUNCTION(BlueprintCallable)
    void Sort();
    
};

