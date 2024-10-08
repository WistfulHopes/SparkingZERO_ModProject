#pragma once
#include "CoreMinimal.h"
#include "ESSEventSceneCharacterTypeDE.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionBase.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionCharacterSpecify.generated.h"

class USSDramaticBattleCutEditorUIWindowItemFunctionCharacterSpecify;

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorUIWindowItemFunctionCharacterSpecify : public USSDramaticBattleCutEditorUIWindowItemFunctionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSEventSceneCharacterTypeDE FocusedValue;
    
public:
    USSDramaticBattleCutEditorUIWindowItemFunctionCharacterSpecify();

    UFUNCTION(BlueprintCallable)
    static USSDramaticBattleCutEditorUIWindowItemFunctionCharacterSpecify* CreateAndInitialize(FSSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter InParameter);
    
};

