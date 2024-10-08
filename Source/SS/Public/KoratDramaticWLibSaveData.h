#pragma once
#include "CoreMinimal.h"
#include "KoratDramaticWLibBattleReportSaveData.h"
#include "KoratDramaticWLibSaveData.generated.h"

USTRUCT(BlueprintType)
struct SS_API FKoratDramaticWLibSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDramaticWLibBattleReportSaveData ReportData;
    
    FKoratDramaticWLibSaveData();
};

