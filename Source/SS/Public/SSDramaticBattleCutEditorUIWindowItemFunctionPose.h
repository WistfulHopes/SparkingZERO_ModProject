#pragma once
#include "CoreMinimal.h"
#include "KoratDRMEditActionDataList.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionBase.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter.h"
#include "SSDramaticBattleCutEditorUIWindowItemFunctionPose.generated.h"

class USSDramaticBattleCutEditorUIWindowItemFunctionPose;

UCLASS(Blueprintable)
class USSDramaticBattleCutEditorUIWindowItemFunctionPose : public USSDramaticBattleCutEditorUIWindowItemFunctionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoratDRMEditActionDataList FocusedValue;
    
public:
    USSDramaticBattleCutEditorUIWindowItemFunctionPose();

    UFUNCTION(BlueprintCallable)
    static USSDramaticBattleCutEditorUIWindowItemFunctionPose* CreateAndInitialize(FSSDramaticBattleCutEditorUIWindowItemFunctionInitializeParameter InParameter);
    
};

