#pragma once
#include "CoreMinimal.h"
#include "EMenuMissionMode.h"
#include "SSMissionNowData.h"
#include "SSMissionUserDataSaveDataListSaveData.h"
#include "SSMissionUserDataTempArray.h"
#include "KoratMissionJadgeData.generated.h"

USTRUCT(BlueprintType)
struct FKoratMissionJadgeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMenuMissionMode, FSSMissionUserDataSaveDataListSaveData> MissionUserDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSMissionUserDataTempArray> UserDataTemps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSMissionNowData MissionNowData;
    
    SS_API FKoratMissionJadgeData();
};

