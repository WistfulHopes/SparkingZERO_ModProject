#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSStyleGuideButton.generated.h"

class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSStyleGuideButton : public USSHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* GuideButtonText;
    
public:
    USSStyleGuideButton();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeNormal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeDisable();
    
    UFUNCTION(BlueprintCallable)
    void Disable(int32 InConsumeBlastStock);
    
    UFUNCTION(BlueprintCallable)
    void Decide();
    
    UFUNCTION(BlueprintCallable)
    void Activate(int32 InConsumeBlastStock);
    
};

