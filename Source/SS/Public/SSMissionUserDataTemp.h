#pragma once
#include "CoreMinimal.h"
#include "KoratMissionDataList.h"
#include "SSMissionUserDataTemp.generated.h"

class USSMissionDataRecord;

USTRUCT(BlueprintType)
struct FSSMissionUserDataTemp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratMissionDataList MissionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USSMissionDataRecord* MIssionData;
    
    SS_API FSSMissionUserDataTemp();
};

