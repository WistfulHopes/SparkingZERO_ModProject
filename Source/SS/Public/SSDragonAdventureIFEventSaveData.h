#pragma once
#include "CoreMinimal.h"
#include "EKoratUnLockMode.h"
#include "SSUnLockDetail.h"
#include "SSDragonAdventureIFEventSaveData.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSDragonAdventureIFEventSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadOnlyResultIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResultIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUnLockMode UnlockInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NormalClearCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AnotherClearCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUnLockMode EpisodeRewardUnlockInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSUnLockDetail UnLockDetail;
    
    FSSDragonAdventureIFEventSaveData();
};

