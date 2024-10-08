#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditCameraDataList.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionBase.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionCameraName.generated.h"

class USSDramaticBattleCutEditorUIWindowItemFunctionCameraName;

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorUIWindowItemFunctionCameraName : public USSDramaticBattleCutEditorUIWindowItemFunctionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditCameraDataList FocusedValue;
    
public:
    USSDramaticBattleCutEditorUIWindowItemFunctionCameraName();

    UFUNCTION(BlueprintCallable)
    static USSDramaticBattleCutEditorUIWindowItemFunctionCameraName* CreateAndInitialize(FSSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter InParameter);
    
};

