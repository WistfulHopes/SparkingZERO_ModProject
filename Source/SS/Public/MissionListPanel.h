#pragma once
#include "CoreMinimal.h"
#include "EAnimPlayStatus.h"
#include "KoratMissionDataList.h"
#include "MissionListPanel.generated.h"

class USSMissionDataRecord;

USTRUCT(BlueprintType)
struct FMissionListPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSMissionDataRecord* MIssionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMissionDataList MissionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimPlayStatus AnimStatus;
    
    SS_API FMissionListPanel();
};

