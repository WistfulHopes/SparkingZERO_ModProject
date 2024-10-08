#pragma once
#include "CoreMinimal.h"
#include "KoratCharacterDataList.h"
#include "SSBattleMode010EventBonus.generated.h"

USTRUCT(BlueprintType)
struct FSSBattleMode010EventBonus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratCharacterDataList CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventBonus;
    
    SS_API FSSBattleMode010EventBonus();
};

