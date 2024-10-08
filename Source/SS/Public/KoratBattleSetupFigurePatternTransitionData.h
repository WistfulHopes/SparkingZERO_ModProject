#pragma once
#include "CoreMinimal.h"
#include "EBattleSetupFigurePatternType.h"
#include "KoratBattleSetupTransitionDataRecord.h"
#include "KoratBattleSetupFigurePatternTransitionData.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleSetupFigurePatternTransitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBattleSetupFigurePatternType, FKoratBattleSetupTransitionDataRecord> TransitionData;
    
    SS_API FKoratBattleSetupFigurePatternTransitionData();
};

