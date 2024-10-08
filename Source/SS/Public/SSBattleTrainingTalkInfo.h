#pragma once
#include "CoreMinimal.h"
#include "SSBattleTrainingTalkData.h"
#include "SSBattleTrainingTalkInfo.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleTrainingTalkInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinMissionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMissionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSBattleTrainingTalkData> TalkDataArray;
    
    SS_API FSSBattleTrainingTalkInfo();
};

