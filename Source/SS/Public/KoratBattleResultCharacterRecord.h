#pragma once
#include "CoreMinimal.h"
#include "KoratBattlePlayCharacter.h"
#include "KoratCharacterBattleCount.h"
#include "KoratBattleResultCharacterRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleResultCharacterRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattlePlayCharacter BattlePlayCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterBattleCount BattleCount;
    
    SS_API FKoratBattleResultCharacterRecord();
};

