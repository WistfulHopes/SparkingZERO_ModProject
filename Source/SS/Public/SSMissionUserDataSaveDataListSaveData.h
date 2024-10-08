#pragma once
#include "CoreMinimal.h"
#include "KoratMissionDataList.h"
#include "SSMissionUserDataSaveData.h"
#include "SSMissionUserDataSaveDataListSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSSMissionUserDataSaveDataListSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FKoratMissionDataList, FSSMissionUserDataSaveData> MissionUserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddMissionVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlatformTrophyInfoSynced;
    
    SS_API FSSMissionUserDataSaveDataListSaveData();
};

