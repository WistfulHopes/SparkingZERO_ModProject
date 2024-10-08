#pragma once
#include "CoreMinimal.h"
#include "SSMenuManager.h"
#include "SSEventSceneDecisionBranch.generated.h"

class UButton;
class UCanvasPanel;
class USSMenuButton;

UCLASS(Blueprintable, EditInlineNew, HideDropdown)
class USSEventSceneDecisionBranch : public USSMenuManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint8, USSMenuButton*> Buttons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* DummyFocusButton;
    
public:
    USSEventSceneDecisionBranch();

private:
    UFUNCTION(BlueprintCallable)
    void OnDecidedTop();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedRight();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedLeft();
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedBottom();
    
};

