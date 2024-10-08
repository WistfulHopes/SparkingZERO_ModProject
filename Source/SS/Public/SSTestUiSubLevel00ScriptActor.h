#pragma once
#include "CoreMinimal.h"
#include "SSUiLevelScriptActor.h"
#include "SSTestUiSubLevel00ScriptActor.generated.h"

class ASSTestUiSubLevel00Controller;

UCLASS(Blueprintable)
class ASSTestUiSubLevel00ScriptActor : public ASSUiLevelScriptActor {
    GENERATED_BODY()
public:
    ASSTestUiSubLevel00ScriptActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ASSTestUiSubLevel00Controller* GetUiSubLevelController();
    
};

