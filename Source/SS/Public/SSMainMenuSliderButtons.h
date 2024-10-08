#pragma once
#include "CoreMinimal.h"
#include "SSMainMenuSliderButton.h"
#include "SSMainMenuSliderButtonDescription.h"
#include "SSMenuManager.h"
#include "SSMainMenuSliderButtons.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSMainMenuSliderButtons : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenuSliderButton> Buttons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenuSliderButtonDescription> ButtonDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSSMainMenuSliderButtonDescription> VisibleButtonDescriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuButton* SelectedButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuButton* DecidedButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<bool> NotifiedButtonList;
    
public:
    USSMainMenuSliderButtons();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlideRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlideLeft();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDecidedButton();
    
};

