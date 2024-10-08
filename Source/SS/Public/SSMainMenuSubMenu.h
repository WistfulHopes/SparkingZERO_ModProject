#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSMainMenuSubMenu.generated.h"

class USSMainMenuSlider;
class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSMainMenuSubMenu : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USSMenuButton*> Buttons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMainMenuSlider* Slider;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuButton* DecidedButton;
    
public:
    USSMainMenuSubMenu();

private:
    UFUNCTION(BlueprintCallable)
    void OnFocusedButton();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedButton();
    
};

