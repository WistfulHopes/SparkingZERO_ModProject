#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSRankingResourceDataAssetRecord.h"
#include "SSRankingResourceDataAsset.generated.h"

UCLASS(Blueprintable)
class USSRankingResourceDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSRankingResourceDataAssetRecord> Records;
    
public:
    USSRankingResourceDataAsset();

};

