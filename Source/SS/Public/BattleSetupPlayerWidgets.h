#pragma once
#include "CoreMinimal.h"
#include "BattleSetupPlayerWidgets.generated.h"

class USSBattleSetupCharaIcon;

USTRUCT(BlueprintType)
struct FBattleSetupPlayerWidgets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSBattleSetupCharaIcon* TopCharaIcon;
    
    SS_API FBattleSetupPlayerWidgets();
};

