#pragma once
#include "CoreMinimal.h"
#include "EKoratBattleSetupTransition.h"
#include "KoratBattleSetupMenuTransitionData.h"
#include "KoratBattleSetupTransitionDataRecord.h"
#include "KoratBattleSetupMenuData.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleSetupMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleSetupTransition, FKoratBattleSetupMenuTransitionData> TransitionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EKoratBattleSetupTransition, FKoratBattleSetupTransitionDataRecord> IdleData;
    
    SS_API FKoratBattleSetupMenuData();
};

