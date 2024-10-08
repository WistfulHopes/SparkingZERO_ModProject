#pragma once
#include "CoreMinimal.h"
#include "SSSkillGuideBase.h"
#include "SSSkillGuideTypeB_SpSkill.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class USSSkillGuideTypeB_SpSkill : public USSSkillGuideBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UImage*> SpGaugeIconWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UImage*> SpGaugeIconWidgets2;
    
public:
    USSSkillGuideTypeB_SpSkill();

};

