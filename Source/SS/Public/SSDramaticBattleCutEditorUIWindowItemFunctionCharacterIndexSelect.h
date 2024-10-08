#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionBase.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionCharacterIndexSelect.generated.h"

class USSDramaticBattleCutEditorUIWindowItemFunctionCharacterIndexSelect;

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorUIWindowItemFunctionCharacterIndexSelect : public USSDramaticBattleCutEditorUIWindowItemFunctionBase {
    GENERATED_BODY()
public:
    USSDramaticBattleCutEditorUIWindowItemFunctionCharacterIndexSelect();

    UFUNCTION(BlueprintCallable)
    static USSDramaticBattleCutEditorUIWindowItemFunctionCharacterIndexSelect* CreateAndInitialize(FSSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter InParameter);
    
};

