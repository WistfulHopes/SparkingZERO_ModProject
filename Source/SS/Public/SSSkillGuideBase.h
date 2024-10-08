#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSSkillGuideBase.generated.h"

class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USSSkillGuideBase : public USSHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* GuideButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* GuideButtonText01;
    
public:
    USSSkillGuideBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangePossibleStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangePossibleFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeImpossibleStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeImpossibleFinish();
    
};

