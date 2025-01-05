#pragma once
#include "CoreMinimal.h"
#include "SSBattleSetupUserDataSaveDataTeamingCharacter.h"
#include "SSBattleSetupUserDataTeamingMySets.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleSetupUserDataTeamingMySets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSBattleSetupUserDataSaveDataTeamingCharacter> MySets;
    
    SS_API FSSBattleSetupUserDataTeamingMySets();
};

