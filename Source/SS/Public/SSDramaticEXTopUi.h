#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDramaticEXTopUi.generated.h"

class USSRemoteButton;

UCLASS(Blueprintable, EditInlineNew)
class USSDramaticEXTopUi : public USSMenuManager {
    GENERATED_BODY()
public:
    USSDramaticEXTopUi();

protected:
    UFUNCTION(BlueprintCallable)
    void SetButtonData(USSRemoteButton* InButton, int32 InDataIndex);
    
    UFUNCTION(BlueprintCallable)
    void SelectTopButton();
    
public:
    UFUNCTION(BlueprintCallable)
    void SelectThumbnail();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SelectBattle();
    
};

