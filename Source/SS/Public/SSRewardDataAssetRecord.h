#pragma once
#include "CoreMinimal.h"
#include "EKortaRewardType.h"
#include "KoratRewardItemDataList.h"
#include "MutualDataAsset.h"
#include "SSRewardDataAssetRecord.generated.h"

UCLASS(Blueprintable)
class USSRewardDataAssetRecord : public UMutualDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKortaRewardType RewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratRewardItemDataList RewardItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNumRewardType;
    
    USSRewardDataAssetRecord();

};

