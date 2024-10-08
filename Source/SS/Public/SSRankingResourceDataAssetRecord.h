#pragma once
#include "CoreMinimal.h"
#include "SSRankingResourceDataAssetRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSRankingResourceDataAssetRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> Resource;
    
    SS_API FSSRankingResourceDataAssetRecord();
};

