#pragma once
#include "CoreMinimal.h"
#include "SSBattlePlayerInfo.generated.h"

class ASSCharacter;

USTRUCT(BlueprintType)
struct FSSBattlePlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASSCharacter> Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASSCharacter* rollbackBeforeCharacter;
    
    SS_API FSSBattlePlayerInfo();
};

