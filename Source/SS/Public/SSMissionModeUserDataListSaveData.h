#pragma once
#include "CoreMinimal.h"
#include "EMenuMissionMode.h"
#include "SSMissionUserDataSaveDataListSaveData.h"
#include "SSMissionModeUserDataListSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSSMissionModeUserDataListSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMenuMissionMode, FSSMissionUserDataSaveDataListSaveData> MissionModeUserDataList;
    
    SS_API FSSMissionModeUserDataListSaveData();
};

