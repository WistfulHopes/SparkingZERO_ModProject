#pragma once
#include "CoreMinimal.h"
#include "KoratBattleSetupCharacterData.h"
#include "KoratBattleSetupTeamData.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleSetupTeamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleSetupCharacterData> TeamMembers;
    
    SS_API FKoratBattleSetupTeamData();
};

