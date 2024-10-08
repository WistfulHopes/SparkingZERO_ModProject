#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterBattleCount.h"
#include "KoratBattleResultCharacterIDRecord.generated.h"

USTRUCT(BlueprintType)
struct FKoratBattleResultCharacterIDRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterBattleCount BattleCount;
    
    SS_API FKoratBattleResultCharacterIDRecord();
};

