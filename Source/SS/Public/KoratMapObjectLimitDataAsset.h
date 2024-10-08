#pragma once
#include "CoreMinimal.h"
#include "KoratMapObjectLimitDataAssetRecord.h"
#include "KoratObjectLimitDataList.h"
#include "MutualDataAsset.h"
#include "KoratMapObjectLimitDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratMapObjectLimitDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratObjectLimitDataList, FKoratMapObjectLimitDataAssetRecord> RecordsByDataList;
    
public:
    UKoratMapObjectLimitDataAsset();

};

