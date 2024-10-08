#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSRankMatchRankDataAsset.generated.h"

class USSRankMatchRankDataAssetRecord;

UCLASS(Blueprintable)
class USSRankMatchRankDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSRankMatchRankDataAssetRecord*> PtrRecords;
    
public:
    USSRankMatchRankDataAsset();

};

