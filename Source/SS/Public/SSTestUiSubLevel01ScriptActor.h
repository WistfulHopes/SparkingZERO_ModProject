#pragma once
#include "CoreMinimal.h"
#include "SSUiLevelScriptActor.h"
#include "SSTestUiSubLevel01ScriptActor.generated.h"

class ASSTestUiSubLevel01Controller;

UCLASS(Blueprintable)
class ASSTestUiSubLevel01ScriptActor : public ASSUiLevelScriptActor {
    GENERATED_BODY()
public:
    ASSTestUiSubLevel01ScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ASSTestUiSubLevel01Controller* GetUiSubLevelController();
    
};

