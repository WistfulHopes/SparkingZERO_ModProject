#pragma once
#include "CoreMinimal.h"
#include "MutualDataAsset.h"
#include "SSRewardDataAsset.generated.h"

class USSRewardDataAssetRecord;

UCLASS(Blueprintable)
class USSRewardDataAsset : public UMutualDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USSRewardDataAssetRecord*> PtrRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AlreadyUnlockedCommonMoney;
    
public:
    USSRewardDataAsset();

};

