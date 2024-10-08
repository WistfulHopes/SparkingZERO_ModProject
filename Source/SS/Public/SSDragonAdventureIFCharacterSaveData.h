#pragma once
#include "CoreMinimal.h"
#include "EKoratUnLockMode.h"
#include "SSDragonAdventureIFEventBlockSaveData.h"
#include "SSDragonAdventureIFEventSaveData.h"
#include "SSUnLockDetail.h"
#include "SSDragonAdventureIFCharacterSaveData.generated.h"

USTRUCT(BlueprintType)
struct SS_API FSSDragonAdventureIFCharacterSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratUnLockMode UnlockInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSDragonAdventureIFEventBlockSaveData> EventBlockDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSSDragonAdventureIFEventSaveData> EventDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LastEventBlockName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasShowActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSUnLockDetail UnLockDetail;
    
    FSSDragonAdventureIFCharacterSaveData();
};

