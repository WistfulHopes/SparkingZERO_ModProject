#pragma once
#include "CoreMinimal.h"
#include "SSBattleSetupLevelScriptActorBase.h"
#include "SSPlayerCardLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class ASSPlayerCardLevelScriptActor : public ASSBattleSetupLevelScriptActorBase {
    GENERATED_BODY()
public:
    ASSPlayerCardLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};

