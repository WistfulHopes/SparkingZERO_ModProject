#pragma once
#include "CoreMinimal.h"
#include "SSBattleSetupLevelScriptActor.h"
#include "SSOnlineBattleSetupLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class ASSOnlineBattleSetupLevelScriptActor : public ASSBattleSetupLevelScriptActor {
    GENERATED_BODY()
public:
    ASSOnlineBattleSetupLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};

