#pragma once
#include "CoreMinimal.h"
#include "KoratEffectAtbDataAssetRecord.h"
#include "KoratInteractTriggerTypeDataList.h"
#include "MutualDataAsset.h"
#include "KoratEffectAtbDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratEffectAtbDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratInteractTriggerTypeDataList, FKoratEffectAtbDataAssetRecord> RecordsByDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKoratEffectAtbDataAssetRecord> Records;
    
public:
    UKoratEffectAtbDataAsset();

    UFUNCTION(BlueprintCallable)
    void Prepare();
    
};

