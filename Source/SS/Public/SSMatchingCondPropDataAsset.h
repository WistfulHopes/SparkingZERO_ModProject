#pragma once
#include "CoreMinimal.h"
#include "EKoratTimeLimitType.h"
#include "MutualDataAsset.h"
#include "SSMatchingCondPropDataAssetRecord.h"
#include "SSMatchingCondPropDataAsset.generated.h"

UCLASS(Blueprintable)
class USSMatchingCondPropDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratTimeLimitType RankMatchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSMatchingCondPropDataAssetRecord> Records;
    
    USSMatchingCondPropDataAsset();

};

