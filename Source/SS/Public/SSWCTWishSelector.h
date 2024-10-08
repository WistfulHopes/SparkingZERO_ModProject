#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSWCTWishSelectorButtons.h"
#include "SSWCTWishSelector.generated.h"

class USSWCTWishSelectorTitle;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class USSWCTWishSelector : public USSMenuManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ChoicesCountSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FSSWCTWishSelectorButtons> TalkButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSWCTWishSelectorTitle* Title;
    
public:
    USSWCTWishSelector();

private:
    UFUNCTION(BlueprintCallable)
    void OnSelectorRight();
    
    UFUNCTION(BlueprintCallable)
    void OnSelectorLeft();
    
    UFUNCTION(BlueprintCallable)
    void OnFocusedButton();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedButton();
    
};

