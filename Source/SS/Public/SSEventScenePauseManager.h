#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSEventScenePauseManager.generated.h"

class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew)
class USSEventScenePauseManager : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint8, USSMenuButton*> Buttons;
    
public:
    USSEventScenePauseManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnDecidedButton2();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedButton1();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedButton0();
    
};

