#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ESSDramaticBattleCutEditorUIType.h"
#include "SSDramaticBattleCutEditorUISetupParameter.h"
#include "SSDramaticBattleCutEditorUIBase.generated.h"

UINTERFACE(MinimalAPI)
class USSDramaticBattleCutEditorUIBase : public UInterface {
    GENERATED_BODY()
};

class ISSDramaticBattleCutEditorUIBase : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void Setup(const FSSDramaticBattleCutEditorUISetupParameter& InParameter) PURE_VIRTUAL(Setup,);
    
    UFUNCTION()
    virtual void Initialize() PURE_VIRTUAL(Initialize,);
    
    UFUNCTION()
    virtual ESSDramaticBattleCutEditorUIType GetUIType() PURE_VIRTUAL(GetUIType, return ESSDramaticBattleCutEditorUIType::None;);
    
    UFUNCTION()
    virtual void Finalize() PURE_VIRTUAL(Finalize,);
    
};

