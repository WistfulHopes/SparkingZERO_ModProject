#pragma once
#include "CoreMinimal.h"
#include "KoratMissionDataList.h"
#include "SSMissionUserDataSaveData.h"
#include "KoratMode02MissionBeforAfterData.generated.h"

USTRUCT(BlueprintType)
struct FKoratMode02MissionBeforAfterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMissionDataList Mode02MissionBefor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMissionDataList Mode02MissionAfter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSMissionUserDataSaveData BeforeMissionUserData;
    
    SS_API FKoratMode02MissionBeforAfterData();
};

