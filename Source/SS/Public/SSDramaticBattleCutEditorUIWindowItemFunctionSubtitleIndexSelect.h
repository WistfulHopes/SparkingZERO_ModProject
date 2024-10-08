#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionBase.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionSubtitleIndexSelect.generated.h"

class USSDramaticBattleCutEditorUIWindowItemFunctionSubtitleIndexSelect;

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorUIWindowItemFunctionSubtitleIndexSelect : public USSDramaticBattleCutEditorUIWindowItemFunctionBase {
    GENERATED_BODY()
public:
    USSDramaticBattleCutEditorUIWindowItemFunctionSubtitleIndexSelect();

    UFUNCTION(BlueprintCallable)
    static USSDramaticBattleCutEditorUIWindowItemFunctionSubtitleIndexSelect* CreateAndInitialize(FSSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter InParameter);
    
};

