#pragma once
#include "CoreMinimal.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionBase.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionActionNameAlreadySet.generated.h"

class USSDramaticBattleCutEditorUIWindowItemFunctionActionNameAlreadySet;

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorUIWindowItemFunctionActionNameAlreadySet : public USSDramaticBattleCutEditorUIWindowItemFunctionBase {
    GENERATED_BODY()
public:
    USSDramaticBattleCutEditorUIWindowItemFunctionActionNameAlreadySet();

    UFUNCTION(BlueprintCallable)
    static USSDramaticBattleCutEditorUIWindowItemFunctionActionNameAlreadySet* CreateAndInitialize(FSSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter InParameter);
    
};

