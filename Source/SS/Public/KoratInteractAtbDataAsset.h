#pragma once
#include "CoreMinimal.h"
#include "KoratInteractAtbDataAssetRecord.h"
#include "KoratInteractAtbTypeDataList.h"
#include "MutualDataAsset.h"
#include "KoratInteractAtbDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratInteractAtbDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratInteractAtbTypeDataList, FKoratInteractAtbDataAssetRecord> RecordsByDataList;
    
public:
    UKoratInteractAtbDataAsset();

    UFUNCTION(BlueprintCallable)
    void Prepare();
    
};

