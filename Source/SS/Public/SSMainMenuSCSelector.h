#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSMainMenuSCSelector.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSMainMenuSCSelector : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuButton* ShopButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSMenuButton* CustomizeButton;
    
public:
    USSMainMenuSCSelector();

private:
    UFUNCTION(BlueprintCallable)
    void OnFocusedShopButton();
    
    UFUNCTION(BlueprintCallable)
    void OnFocusedCustomizeButton();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedShopButton();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedCustomizeButton();
    
};

