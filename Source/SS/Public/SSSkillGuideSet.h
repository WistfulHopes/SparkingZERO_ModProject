#pragma once
#include "CoreMinimal.h"
#include "SSHUDWidget.h"
#include "SSSkillGuideSet.generated.h"

class USSSkillGuideBase;

UCLASS(Blueprintable, EditInlineNew)
class USSSkillGuideSet : public USSHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSSkillGuideBase* SkillGuideBStockSlot1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSSkillGuideBase* SkillGuideBStockSlot2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSSkillGuideBase* SkillGuideSPSlot1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSSkillGuideBase* SkillGuideSPSlot2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USSSkillGuideBase* SkillGuideUltimate;
    
public:
    USSSkillGuideSet();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGuideShowStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGuideShowFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGuideHideStart();
    
};

