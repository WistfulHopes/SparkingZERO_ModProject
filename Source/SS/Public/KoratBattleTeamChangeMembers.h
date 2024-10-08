#pragma once
#include "CoreMinimal.h"
#include "KoratBattleTeamChangeData.h"
#include "KoratBattleTeamChangeMembers.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleTeamChangeMembers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKoratBattleTeamChangeData> Characters;
    
    SS_API FKoratBattleTeamChangeMembers();
};

