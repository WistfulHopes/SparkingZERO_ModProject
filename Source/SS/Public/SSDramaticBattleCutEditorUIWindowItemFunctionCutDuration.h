#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionBase.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionCutDuration.generated.h"

class USSDramaticBattleCutEditorUIWindowItemFunctionCutDuration;

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorUIWindowItemFunctionCutDuration : public USSDramaticBattleCutEditorUIWindowItemFunctionBase {
    GENERATED_BODY()
public:
    USSDramaticBattleCutEditorUIWindowItemFunctionCutDuration();

    UFUNCTION(BlueprintCallable)
    static USSDramaticBattleCutEditorUIWindowItemFunctionCutDuration* CreateAndInitialize(FSSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter InParameter);
    
};

