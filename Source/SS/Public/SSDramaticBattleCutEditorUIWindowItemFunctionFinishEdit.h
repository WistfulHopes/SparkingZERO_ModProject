#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionBase.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionFinishEdit.generated.h"

class USSDramaticBattleCutEditorUIWindowItemFunctionFinishEdit;

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorUIWindowItemFunctionFinishEdit : public USSDramaticBattleCutEditorUIWindowItemFunctionBase {
    GENERATED_BODY()
public:
    USSDramaticBattleCutEditorUIWindowItemFunctionFinishEdit();

    UFUNCTION(BlueprintCallable)
    static USSDramaticBattleCutEditorUIWindowItemFunctionFinishEdit* CreateAndInitialize(FSSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter InParameter);
    
};

