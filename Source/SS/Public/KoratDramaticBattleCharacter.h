#pragma once
#include "CoreMinimal.h"
#include "KoratBattlePlayCharacter.h"
#include "KoratPlayerStartDataList.h"
#include "KoratDramaticBattleCharacter.generated.h"

USTRUCT(BlueprintType)
struct FKoratDramaticBattleCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattlePlayCharacter BattleTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratPlayerStartDataList BattleTeamStartData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFreeSelectCharas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNotShowCharas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPrivateCharas;
    
    SS_API FKoratDramaticBattleCharacter();
};

