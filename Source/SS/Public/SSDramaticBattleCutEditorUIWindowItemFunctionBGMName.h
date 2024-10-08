#pragma once
#include "CoreMinimal.h"
#include "KoratBGMDataList.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionBase.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionBGMName.generated.h"

class USSDramaticBattleCutEditorUIWindowItemFunctionBGMName;

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorUIWindowItemFunctionBGMName : public USSDramaticBattleCutEditorUIWindowItemFunctionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratBGMDataList FocusedValue;
    
public:
    USSDramaticBattleCutEditorUIWindowItemFunctionBGMName();

    UFUNCTION(BlueprintCallable)
    static USSDramaticBattleCutEditorUIWindowItemFunctionBGMName* CreateAndInitialize(FSSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter InParameter);
    
};

