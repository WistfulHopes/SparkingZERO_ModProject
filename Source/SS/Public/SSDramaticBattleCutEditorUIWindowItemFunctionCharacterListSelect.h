#pragma once
#include "CoreMinimal.h"
#include "ESSEventSceneCharacterTypeDE.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionBase.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionCharacterListSelect.generated.h"

class USSDramaticBattleCutEditorUIWindowItemFunctionCharacterListSelect;

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorUIWindowItemFunctionCharacterListSelect : public USSDramaticBattleCutEditorUIWindowItemFunctionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSEventSceneCharacterTypeDE FocusedValue;
    
public:
    USSDramaticBattleCutEditorUIWindowItemFunctionCharacterListSelect();

    UFUNCTION(BlueprintCallable)
    static USSDramaticBattleCutEditorUIWindowItemFunctionCharacterListSelect* CreateAndInitialize(FSSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter InParameter);
    
};

