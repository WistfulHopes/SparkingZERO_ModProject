#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "SSTravelSystemSubLevelScriptAct.generated.h"

class ASSTravelSystemLevelScriptActor;
class UObject;

UCLASS(Blueprintable)
class ASSTravelSystemSubLevelScriptAct : public ALevelScriptActor {
    GENERATED_BODY()
public:
    ASSTravelSystemSubLevelScriptAct(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    ASSTravelSystemLevelScriptActor* GetTravelSystemLevelScriptActor(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnTransionMessage(const FName& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnTransionCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnRemoveLevelReadyToRelease(bool bTransitionMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnBeforeWaitForPreEndPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EventOnAddLevelLoadCompleted(bool bTransitionMode);
    
};

