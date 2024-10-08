#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleSetupTransition.h"
#include "KoratBattleSetupTransitionDataRecord.h"
#include "KoratBattleSetupMenuTransitionData.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleSetupMenuTransitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleSetupTransition, FKoratBattleSetupTransitionDataRecord> TransitionData;
    
    SS_API FKoratBattleSetupMenuTransitionData();
};

