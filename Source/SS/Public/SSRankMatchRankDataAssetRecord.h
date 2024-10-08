#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSRankMatchRankDataAssetRecord.generated.h"

UCLASS(Blueprintable)
class USSRankMatchRankDataAssetRecord : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RankNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RankName;
    
    USSRankMatchRankDataAssetRecord();

};

