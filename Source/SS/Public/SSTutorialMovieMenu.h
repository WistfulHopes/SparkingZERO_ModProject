#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSTutorialMovieMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USSTutorialMovieMenu : public USSMenuManager {
    GENERATED_BODY()
public:
    USSTutorialMovieMenu();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartPause();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreparePlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndPause();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCleanupPlay();
    
};

