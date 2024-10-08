#pragma once
#include "CoreMinimal.h"
#include "KoratBattleSetupTeamData.h"
#include "KoratBattleSetupData.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleSetupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleSetupTeamData> TeamData;
    
    SS_API FKoratBattleSetupData();
};

