#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSActionListManager.generated.h"

class USSActionListContentManager;

UCLASS(Blueprintable, EditInlineNew)
class USSActionListManager : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USSActionListContentManager* ActionListContentManager;
    
public:
    USSActionListManager();

    UFUNCTION(BlueprintCallable)
    void SubScroll();
    
    UFUNCTION(BlueprintCallable)
    void SetFocusOnPossible();
    
    UFUNCTION(BlueprintCallable)
    void OnPadRButton();
    
    UFUNCTION(BlueprintCallable)
    void OnPadLButton();
    
    UFUNCTION(BlueprintCallable)
    void NextPlatformType();
    
    UFUNCTION(BlueprintCallable)
    void ChkList();
    
    UFUNCTION(BlueprintCallable)
    void AddScroll();
    
};

