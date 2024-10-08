#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESSWLibPenaltyReasonType.h"
#include "KoratDramaticWLibBattleReportSaveData.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDramaticWLibBattleReportSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSWLibPenaltyReasonType, FDateTime> LastPenaltyNotifyDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSWLibPenaltyReasonType, int32> LastNotifyPenaltyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastReportDate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint64> TodayReportedBattles;
    
    FKoratDramaticWLibBattleReportSaveData();
};

