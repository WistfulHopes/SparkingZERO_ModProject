#pragma once
#include "CoreMinimal.h"
#include "KoratObjectLimitDataAssetRecord.h"
#include "KoratObjectLimitDataList.h"
#include "MutualDataAsset.h"
#include "KoratObjectLimitDataAsset.generated.h"

UCLASS(Blueprintable)
class UKoratObjectLimitDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratObjectLimitDataList, FKoratObjectLimitDataAssetRecord> RecordsByDataList;
    
public:
    UKoratObjectLimitDataAsset();

};

