#pragma once
#include "CoreMinimal.h"
#include "KoratEffectSpaceAreaDataAssetRecord.h"
#include "KoratInteractTriggerTypeDataList.h"
#include "MutualDataAsset.h"
#include "KoratEffectSpaceAreaDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratEffectSpaceAreaDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratInteractTriggerTypeDataList, FKoratEffectSpaceAreaDataAssetRecord> RecordsByDataList;
    
public:
    UKoratEffectSpaceAreaDataAsset();

    UFUNCTION(BlueprintCallable)
    void Prepare();
    
};

