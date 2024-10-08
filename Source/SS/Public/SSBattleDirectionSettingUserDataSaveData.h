#pragma once
#include "CoreMinimal.h"
#include "EKoratTimeLimitType.h"
#include "KoratBGMDataList.h"
#include "KoratMapDataList.h"
#include "SSBattleDirectionSettingUserDataSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleDirectionSettingUserDataSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMapDataList BattleStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList BattleBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKoratTimeLimitType Timelimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnhanceditems;
    
    SS_API FSSBattleDirectionSettingUserDataSaveData();
};

