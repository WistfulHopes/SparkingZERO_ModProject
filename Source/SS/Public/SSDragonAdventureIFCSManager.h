#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSDragonAdventureIFCSManager.generated.h"

class USSBuiltInMenu;

UCLASS(Blueprintable, EditInlineNew)
class USSDragonAdventureIFCSManager : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USSBuiltInMenu* BuiltInMenu;
    
public:
    USSDragonAdventureIFCSManager();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ShowRouteClear() const;
    
    UFUNCTION(BlueprintCallable)
    void SetButtonFocus();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnListUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnListDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsModeStart() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void HideRouteClear() const;
    
};

