#pragma once
#include "CoreMinimal.h"
#include "KoratBattlePlayCharacter.h"
#include "KoratCharacterBattleCount.h"
#include "KoratCharacterDataList.h"
#include "KoratBattleResultCharacterRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleResultCharacterRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBattlePlayCharacter BattlePlayCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterBattleCount BattleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FKoratCharacterDataList> FormChangeHistory;
    
    SS_API FKoratBattleResultCharacterRecord();
};

