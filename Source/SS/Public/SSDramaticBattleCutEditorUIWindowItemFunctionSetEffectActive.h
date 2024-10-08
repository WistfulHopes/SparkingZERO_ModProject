#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionBase.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionSetEffectActive.generated.h"

class USSDramaticBattleCutEditorUIWindowItemFunctionSetEffectActive;

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorUIWindowItemFunctionSetEffectActive : public USSDramaticBattleCutEditorUIWindowItemFunctionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FocusedValue;
    
public:
    USSDramaticBattleCutEditorUIWindowItemFunctionSetEffectActive();

    UFUNCTION(BlueprintCallable)
    static USSDramaticBattleCutEditorUIWindowItemFunctionSetEffectActive* CreateAndInitialize(FSSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter InParameter);
    
};

