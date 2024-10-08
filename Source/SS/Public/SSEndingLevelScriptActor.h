#pragma once
#include "CoreMinimal.h"
#include "SSBattleSetupLevelScriptActorBase.h"
#include "SSEndingLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class ASSEndingLevelScriptActor : public ASSBattleSetupLevelScriptActorBase {
    GENERATED_BODY()
public:
    ASSEndingLevelScriptActor(const FObjectInitializer& ObjectInitializer);

};

