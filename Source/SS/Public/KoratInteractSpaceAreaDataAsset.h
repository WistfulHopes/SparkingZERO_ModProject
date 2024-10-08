#pragma once
#include "CoreMinimal.h"
#include "KoratInteractSpaceAreaDataAssetRecord.h"
#include "KoratSpaceAreaTypeDataList.h"
#include "MutualDataAsset.h"
#include "KoratInteractSpaceAreaDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratInteractSpaceAreaDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratSpaceAreaTypeDataList, FKoratInteractSpaceAreaDataAssetRecord> RecordsByDataList;
    
public:
    UKoratInteractSpaceAreaDataAsset();

    UFUNCTION(BlueprintCallable)
    void Prepare();
    
};

