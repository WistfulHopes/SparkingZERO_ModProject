#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMenuMissionMode.h"
#include "ESSMissionType.h"
#include "KoratCharacterDataList.h"
#include "KoratInitialUnlockInfo.h"
#include "KoratMissionDataList.h"
#include "KoratMissionJadgeData.h"
#include "KoratMode02MissionBeforAfterData.h"
#include "KoratModeMissionList.h"
#include "KoratWorldLibBattleIdList.h"
#include "SSMissionModeSortFilterData.h"
#include "SSTrophyProgressMissionTypeDirtyInfo.h"
#include "SSMissionDataManager.generated.h"

class USSMissionDataRecord;
class USSRandom;

UCLASS(Blueprintable)
class USSMissionDataManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSRandom* Random;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMissionJadgeData MissionJadgeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFirstLoginDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMode02MissionBeforAfterData Mode02MissionBeforAfter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMenuMissionMode, FKoratModeMissionList> EachnModeMissionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMissionDataList, USSMissionDataRecord*> Mode03MissionDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMissionDataList, USSMissionDataRecord*> LifeLongMissionDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratInitialUnlockInfo InitialUnlockInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSMissionType, FSSTrophyProgressMissionTypeDirtyInfo> TrophyProgressMissionTypeDirtyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSMissionModeSortFilterData MissionModeSortFilterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMissionDataList, FKoratWorldLibBattleIdList> MissionTypeWorldLibBattleIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> LoadRewardIconInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratCharacterDataList> CharacterUnlockExceptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMasterAchieved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bJudgementPlatformTrophyAllUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlatformTrophySynced;
    
public:
    USSMissionDataManager();

};

