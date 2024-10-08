#pragma once
#include "CoreMinimal.h"
#include "KoratBattleResult.h"
#include "KoratDramaticMissionRequiredData.generated.h"

USTRUCT(BlueprintType)
struct FKoratDramaticMissionRequiredData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattleResult BattleResultData;
    
    SS_API FKoratDramaticMissionRequiredData();
};

