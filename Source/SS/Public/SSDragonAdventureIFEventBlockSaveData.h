#pragma once
#include "CoreMinimal.h"
#include "EKoratUnLockMode.h"
#include "SSUnLockDetail.h"
#include "SSDragonAdventureIFEventBlockSaveData.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSDragonAdventureIFEventBlockSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUnLockMode UnlockInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDragonOrbInEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnlockedByDragonOrb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSUnLockDetail UnLockDetail;
    
    FSSDragonAdventureIFEventBlockSaveData();
};

